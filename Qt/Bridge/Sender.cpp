#include "Sender.h"

/*******************
 * PARENT SENDER
 ******************/

Sender::Sender(int send_value):
    QObject(nullptr),
    mSendValue(send_value)
{}

void Sender::Init(int init_value)
{
    PushValue(init_value, true);
}

/*******************
 * SLIDER SENDER
 ******************/

SliderSender::SliderSender(QSlider* slider, int send_value):
    Sender(send_value),
    mSlider(slider)
{
    connect(mSlider, SIGNAL(valueChanged(int)), this, SLOT(Change(int)));
}

void SliderSender::PushValue(int value, bool send)
{
    mSlider->setValue(value);
    if(send)
        mSlider->valueChanged(value);
}

int SliderSender::GetValue()
{
    return mSlider->value();
}

/*******************
 * CHECK BOX SENDER
 ******************/

CheckBoxSender::CheckBoxSender(QCheckBox* check_box, int send_value):
    Sender(send_value),
    mCheckBox(check_box)
{
    connect(mCheckBox, SIGNAL(stateChanged(int)), this, SLOT(Change(int)));
}

void CheckBoxSender::PushValue(int value, bool send)
{
    mCheckBox->setChecked(value != 0);
    if(send)
        mCheckBox->stateChanged(value);
}

int CheckBoxSender::GetValue()
{
    return mCheckBox->isChecked() ? 1 : 0;
}

/*******************
 * BUTTON GROUP SENDER
 ******************/

ButtonGroupSender::ButtonGroupSender(QButtonGroup* button_group, int send_value):
    Sender(send_value),
    mButtonGroup(button_group)
{
    connect(mButtonGroup, SIGNAL(buttonClicked(int)), this, SLOT(Change(int)));
}

void ButtonGroupSender::PushValue(int value, bool send)
{
    mButtonGroup->button(value)->setChecked(true);
    if(send)
        mButtonGroup->buttonClicked(value);
}

int ButtonGroupSender::GetValue()
{
    return mButtonGroup->checkedId();
}

/*******************
 * TAB WIDGET SENDER
 ******************/

TabWidgetSender::TabWidgetSender(QTabWidget* tab_widget, int send_value):
    Sender(send_value),
    mTabWidget(tab_widget)
{
    connect(mTabWidget, SIGNAL(currentChanged(int)), this, SLOT(Change(int)));
}

void TabWidgetSender::PushValue(int value, bool send)
{
    mTabWidget->setCurrentIndex(value);
    if(send)
        mTabWidget->currentChanged(value);
}

int TabWidgetSender::GetValue()
{
    return mTabWidget->currentIndex();
}

/*******************
 * COMBO BOX SENDER
 ******************/

ComboBoxSender::ComboBoxSender(QComboBox* combo_box, int send_value):
    Sender(send_value),
    mComboBox(combo_box)
{
    connect(mComboBox, SIGNAL(activated(int)), this, SLOT(Change(int)));
}

void ComboBoxSender::PushValue(int value, bool send)
{
    mComboBox->setCurrentIndex(value);
    if(send)
        mComboBox->activated(value);
}

int ComboBoxSender::GetValue()
{
    return mComboBox->currentIndex();
}

/*******************
 * SPIN BOX SENDER
 ******************/

SpinBoxSender::SpinBoxSender(QSpinBox* spin_box, int send_value):
    Sender(send_value),
    mSpinBox(spin_box)
{
    connect(mSpinBox, SIGNAL(valueChanged(int)), this, SLOT(Change(int)));
}

void SpinBoxSender::PushValue(int value, bool send)
{
    mSpinBox->setValue(value);
    if(send)
        mSpinBox->valueChanged(value);
}

int SpinBoxSender::GetValue()
{
    return mSpinBox->value();
}

