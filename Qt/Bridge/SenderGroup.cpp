#include "SenderGroup.h"
#include "Sender.h"

SenderGroup::SenderGroup(QString osc_route, lo_address& address):
    QObject(nullptr),
    mAddress(address),
    mOSCRoute(osc_route),
    mSender(0),
    mMapper(new QSignalMapper)
{
    connect(mMapper, SIGNAL(mapped(int)), this, SLOT(SetSender(int)));
}

SenderGroup::~SenderGroup()
{
    for(auto iter = mSenders.begin(); iter != mSenders.end(); iter++)
        delete *iter;
}

void SenderGroup::Send(int value)
{
    lo_send(mAddress, QString("/gate/" + mOSCRoute).toStdString().c_str(), "ii", mSender, value);
}

void SenderGroup::AddSenderWidget(QSlider* slider, int send_value, int init)
{
    SliderSender* sender = new SliderSender(slider, send_value);
    mSenders.append(sender);
    mMapper->setMapping(sender, send_value);
    connect(sender, SIGNAL(Changed(int)), mMapper, SLOT(map()));
    connect(sender, SIGNAL(Changed(int)), this, SLOT(Send(int)));
    if(init != -1)
        sender->PushValue(init, true);
}

void SenderGroup::AddSenderWidget(QCheckBox* check_box, int send_value, int init)
{
    CheckBoxSender* sender = new CheckBoxSender(check_box, send_value);
    mSenders.append(sender);
    mMapper->setMapping(sender, send_value);
    connect(sender, SIGNAL(Changed(int)), mMapper, SLOT(map()));
    connect(sender, SIGNAL(Changed(int)), this, SLOT(Send(int)));
    if(init != -1)
        sender->PushValue(init, true);
}

void SenderGroup::AddSenderWidget(QButtonGroup* button_group, int send_value, int init)
{
    ButtonGroupSender* sender = new ButtonGroupSender(button_group, send_value);
    mSenders.append(sender);
    mMapper->setMapping(sender, send_value);
    connect(sender, SIGNAL(Changed(int)), mMapper, SLOT(map()));
    connect(sender, SIGNAL(Changed(int)), this, SLOT(Send(int)));
    if(init != -1)
        sender->PushValue(init, true);
}

void SenderGroup::AddSenderWidget(QTabWidget* tab_widget, int send_value, int init)
{
    TabWidgetSender* sender = new TabWidgetSender(tab_widget, send_value);
    mSenders.append(sender);
    mMapper->setMapping(sender, send_value);
    connect(sender, SIGNAL(Changed(int)), mMapper, SLOT(map()));
    connect(sender, SIGNAL(Changed(int)), this, SLOT(Send(int)));
    if(init != -1)
        sender->PushValue(init, true);
}

void SenderGroup::AddSenderWidget(QComboBox* combo_box, int send_value, int init)
{
    ComboBoxSender* sender = new ComboBoxSender(combo_box, send_value);
    mSenders.append(sender);
    mMapper->setMapping(sender, send_value);
    connect(sender, SIGNAL(Changed(int)), mMapper, SLOT(map()));
    connect(sender, SIGNAL(Changed(int)), this, SLOT(Send(int)));
    if(init != -1)
        sender->PushValue(init, true);
}

void SenderGroup::AddSenderWidget(QSpinBox* spin_box, int send_value, int init)
{
    SpinBoxSender* sender = new SpinBoxSender(spin_box, send_value);
    mSenders.append(sender);
    mMapper->setMapping(sender, send_value);
    connect(sender, SIGNAL(Changed(int)), mMapper, SLOT(map()));
    connect(sender, SIGNAL(Changed(int)), this, SLOT(Send(int)));
    if(init != -1)
        sender->PushValue(init, true);
}

bool SenderGroup::PushValue(int index, int value, bool send)
{
    if(index >= mSenders.length())
        return false;

    mSenders.at(index)->PushValue(value, send);
    return true;
}

QVector<int> SenderGroup::GetValues()
{
    QVector<int> vec;
    for(auto iter = mSenders.begin(); iter != mSenders.end(); iter++)
        vec.append((*iter)->GetValue());
    return vec;
}

bool SenderGroup::RouteMatch(QString route)
{
    return mOSCRoute == route;
}

int SenderGroup::GetSenderCount()
{
    return mSenders.count();
}
