#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "SenderGroup.h"
#include "Sender.h"
#include <QtWidgets>

MainWindow::MainWindow(QProcess* pure_data, lo_server_thread* thread, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mPureData(pure_data),
    mOSCReceiver(thread),
    mControllerReaderActive(false)
{
    mSendAddress = lo_address_new(nullptr, OSC_SEND_PORT);
    ui->setupUi(this);

    Init();
}

MainWindow::~MainWindow()
{
    for(auto iter = mButtonGroups.begin(); iter != mButtonGroups.end(); iter++)
        delete *iter;
    for(auto iter = mSenderGroups.begin(); iter != mSenderGroups.end(); iter++)
        delete *iter;
    lo_address_free(mSendAddress);
    delete ui;
    mPureData->close();
    delete mPureData;
    if(mControllerReaderActive)
        mControllerReader->close();
    delete mControllerReader;
}

void MainWindow::ControllerInputReceived(QString path, int sender, int value)
{
    for(auto iter = mSenderGroups.begin(); iter != mSenderGroups.end(); iter++)
    {
        if((*iter)->RouteMatch(path))
        {
            (*iter)->PushValue(sender, value);
            return;
        }

    }
}

bool MainWindow::ReadPatch(bool init)
{
    QFile memory("data/patches.txt");
    if(!memory.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "error", memory.errorString());

    QTextStream stream(&memory);
    int patch;
    if(init)
        patch = -1;
    else
        patch = (int)ui->memory_display_ones->value() + (int)ui->memory_display_tens->value()*10;
    int line_count = 0;
    int sub_line_count = 0;
    bool reached = false;
    while(!stream.atEnd())
    {
        QString line = stream.readLine(); //seek() more efficient?
        if(line_count >= (patch+1)*mPatchConstants.count() && line_count < (patch+2)*mPatchConstants.count())
        {
            reached = true;
            QStringList data = line.split(",");
            if(data.count() != mPatchConstants.at(sub_line_count))
                return false;
            for(int i = 0; i < mPatchConstants.at(sub_line_count); i++)
                mSenderGroups.at(sub_line_count)->PushValue(i, data.at(i).toInt());
            sub_line_count++;
        }
        line_count++;
    }
    memory.close();
    return reached;
}

bool MainWindow::SavePatch()
{
    QFile memory("data/patches.txt");
    if(!memory.open(QIODevice::ReadOnly | QIODevice::Text))
        QMessageBox::information(0, "error", memory.errorString());
    QFile temp("data/temp.txt");
    if(!temp.open(QIODevice::WriteOnly | QIODevice::Text))
        QMessageBox::information(0, "error", memory.errorString());

    QTextStream in(&memory);
    QTextStream temp_out(&temp);
    int patch = (int)ui->memory_display_ones->value() + (int)ui->memory_display_tens->value()*10;
    int line_count = 0;
    int sub_line_count = 0;
    bool reached = false;
    while(!in.atEnd())
    {
        QString line = in.readLine();
        if(line_count >= (patch+1)*mPatchConstants.count() && line_count < (patch+2)*mPatchConstants.count())
        {
            reached = true;
            QVector<int> values = mSenderGroups.at(sub_line_count)->GetValues();
            for(int i = 0; i < values.count(); i++)
            {
                temp_out << values.at(i);
                if(i < values.count() - 1)
                    temp_out << ",";
            }
            temp_out << endl;
            sub_line_count++;
        }
        else
            temp_out << line << endl;
        line_count++;
    }

    memory.remove();
    temp.copy("data/patches.txt");
    temp.remove();

    return reached;
}

void MainWindow::LoadControllerMap(int index)
{
    //lo_address address = lo_address_new(nullptr, OSC_SEND_PORT);
    QString path = "";

    if(index == 0)
    {
        lo_send(mSendAddress, "/gate/controller/enabled", "i", 0);
        return;
    }

    if(mControllerReaderActive)
        mControllerReader->close();
    mControllerReaderActive = false;

    switch(index)
    {
    case 0:
        lo_send(mSendAddress, "/gate/controller/enabled", "i", 0);
        lo_send(mSendAddress, "/gate/controller/properties", "ii", 0, 0);
        return;

    case 1:
        path = ":/resources/data/ps2.ctl";
        break;

    case 2:
        path = ":/resources/data/slide.ctl";
        break;

    case 3:
        {
            path = ":/resources/data/golf.ctl";
            mControllerReaderActive = true;
            delete mControllerReader;
            mControllerReader = new QProcess;
            QString reader_path = "ControllerReaders\\Golf\\GolfController.exe";
            QStringList args;
            mControllerReader->start(reader_path, args);
        }
        break;

    case 4:
        {
            path = ":/resources/data/guitar.ctl";
            mControllerReaderActive = true;
            delete mControllerReader;
            mControllerReader = new QProcess;
            QString reader_path = "ControllerReaders\\RockBand\\RockBand.exe";
            QStringList args;
            mControllerReader->start(reader_path, args);
        }
        break;

    case 5:
        path = ":/resources/data/drum.ctl";
        break;
    }

    QFile file(path);
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "error", file.errorString());
        lo_send(mSendAddress, "/gate/controller/enabled", "i", 0);
        return;
    }

    lo_send(mSendAddress, "/gate/controller/enabled", "i", 1);

    int line_count = 0;
    int force_monophony = 0;
    int force_note_shift = 0;
    QString type_list = "_";
    QString value_list = "_";
    QString octave_list = "_";

    while(!file.atEnd())
    {
        QStringList data = QString(file.readLine()).split(",");
        switch(line_count)
        {
        case 0:
            force_monophony = data.at(0).toInt();
            force_note_shift = data.at(1).toInt();
            break;

        case 1:
            for(int i = 0; i < data.size(); i++)
            {
                QStringList sub_data = data.at(i).split("-");
                if(sub_data.length() != 3)
                {
                    QMessageBox::information(0, "error", "Bad Controller Map");
                    return;
                }
                type_list += sub_data.at(0);
                value_list += sub_data.at(1);
                octave_list += sub_data.at(2);
            }
            break;
        }
        line_count++;
    }
    lo_send(mSendAddress, "/gate/controller/properties", "ii", force_monophony, force_note_shift);
    lo_send(mSendAddress, "/gate/controller/values", "sss", type_list.toStdString().c_str(), value_list.toStdString().c_str(), octave_list.toStdString().c_str());
}

void MainWindow::Flush()
{
    //lo_address address = lo_address_new(nullptr, OSC_SEND_PORT);
    lo_send(mSendAddress, "/gate/flush", "i", 1);
}

void MainWindow::SendKey()
{
    //lo_address address = lo_address_new(nullptr, OSC_SEND_PORT);
    lo_send(mSendAddress, "/gate/controller/send_key", "ii", 0, 0);
}

int ControllerInputHandler(const char* path, const char* types, lo_arg** argv, int argc, void* data, void* user_data)
{
    int sender = argv[0]->i;
    int value = argv[1]->i;

    QString str = QString(path);
    str = str.remove(0,6);

    MainWindow* window = (MainWindow*)user_data;
    window->ControllerInputReceived(str, sender, value);

    return 1;
}

bool MainWindow::Init()
{
    /**************************
     * WAVEFORM INIT
     **************************/

    SenderGroup* type_segment = new SenderGroup("synthesis_type", mSendAddress);
    type_segment->AddSenderWidget(ui->waveform_tab_widget, 0);
    mSenderGroups.append(type_segment);
    mPatchConstants.append(type_segment->GetSenderCount());

    SenderGroup* harmonic_segment = new SenderGroup("harmonic", mSendAddress);
    for(int i = 0; i < 12; i++)
    {
        QSlider* additive = ui->additive_harmonics_group_box->findChild<QSlider*>("additive_" + QString::number(i+1));
        QSlider* subtractive = ui->subtractive_harmonics_group_box->findChild<QSlider*>("subtractive_" + QString::number(i+1));
        harmonic_segment->AddSenderWidget(additive, i);
        harmonic_segment->AddSenderWidget(subtractive, i+12);
    }
    mSenderGroups.append(harmonic_segment);
    mPatchConstants.append(harmonic_segment->GetSenderCount());

    SenderGroup* mix_segment = new SenderGroup("mix", mSendAddress);
    mix_segment->AddSenderWidget(ui->mix_sawtooth_slider, 0);
    mix_segment->AddSenderWidget(ui->mix_pulse_slider, 1);
    mix_segment->AddSenderWidget(ui->mix_triangle_slider, 2);
    mix_segment->AddSenderWidget(ui->mix_sine_slider, 3);
    mSenderGroups.append(mix_segment);
    mPatchConstants.append(mix_segment->GetSenderCount());

    /**************************
     * EFFECTS INIT
     **************************/

    SenderGroup* reverb_segment = new SenderGroup("reverb", mSendAddress);
    reverb_segment->AddSenderWidget(ui->reverb_enabled, 0);
    reverb_segment->AddSenderWidget(ui->reverb_roomsize_slider, 1);
    reverb_segment->AddSenderWidget(ui->reverb_damping_slider, 2);
    reverb_segment->AddSenderWidget(ui->reverb_width_slider, 3);
    reverb_segment->AddSenderWidget(ui->reverb_dry_slider, 4);
    reverb_segment->AddSenderWidget(ui->reverb_wet_slider, 5);
    mSenderGroups.append(reverb_segment);
    mPatchConstants.append(reverb_segment->GetSenderCount());

    SenderGroup* delay_segment = new SenderGroup("delay", mSendAddress);
    delay_segment->AddSenderWidget(ui->delay_enabled, 0);
    delay_segment->AddSenderWidget(ui->delay_strength_slider, 1);
    delay_segment->AddSenderWidget(ui->delay_rate_slider, 2);
    mSenderGroups.append(delay_segment);
    mPatchConstants.append(delay_segment->GetSenderCount());

    SenderGroup* arpeggiator_segment = new SenderGroup("arpeggiator", mSendAddress);
    arpeggiator_segment->AddSenderWidget(ui->arpeggiator_enabled, 0);
    QButtonGroup* octave_group = new QButtonGroup;
    octave_group->addButton(ui->arpeggiator_octaves_1, 0);
    octave_group->addButton(ui->arpeggiator_octaves_2, 1);
    octave_group->addButton(ui->arpeggiator_octaves_3, 2);
    octave_group->addButton(ui->arpeggiator_octaves_4, 3);
    arpeggiator_segment->AddSenderWidget(octave_group, 1);
    mButtonGroups.append(octave_group);
    QButtonGroup* direction_group = new QButtonGroup;
    direction_group->addButton(ui->arpeggiator_direction_up, 1);
    direction_group->addButton(ui->arpeggiator_direction_down, 0);
    direction_group->addButton(ui->arpeggiator_direction_random, 2);
    arpeggiator_segment->AddSenderWidget(direction_group, 2);
    mButtonGroups.append(direction_group);
    QButtonGroup* priority_group = new QButtonGroup;
    priority_group->addButton(ui->arpeggiator_priority_up, 1);
    priority_group->addButton(ui->arpeggiator_priority_down, 0);
    arpeggiator_segment->AddSenderWidget(priority_group, 3);
    mButtonGroups.append(priority_group);
    QButtonGroup* rate_group = new QButtonGroup;
    rate_group->addButton(ui->arpeggiator_rate_x1, 0);
    rate_group->addButton(ui->arpeggiator_rate_x2, 1);
    rate_group->addButton(ui->arpeggiator_rate_x3, 2);
    rate_group->addButton(ui->arpeggiator_rate_x4, 3);
    arpeggiator_segment->AddSenderWidget(rate_group, 4);
    mButtonGroups.append(rate_group);
    arpeggiator_segment->AddSenderWidget(ui->arpeggiator_phase, 5);
    mSenderGroups.append(arpeggiator_segment);
    mPatchConstants.append(arpeggiator_segment->GetSenderCount());

    SenderGroup* subosc_segment = new SenderGroup("suboscillator", mSendAddress);
    subosc_segment->AddSenderWidget(ui->suboscillator_gain, 0);
    QButtonGroup* subosc_octave_group = new QButtonGroup;
    subosc_octave_group->addButton(ui->suboscillator_octave_1, 0);
    subosc_octave_group->addButton(ui->suboscillator_octave_2, 1);
    subosc_segment->AddSenderWidget(subosc_octave_group, 1);
    mSenderGroups.append(subosc_segment);
    mPatchConstants.append(subosc_segment->GetSenderCount());

    /**************************
     * PROPERTIES INIT
     **************************/

    SenderGroup* property_segment = new SenderGroup("property", mSendAddress);
    SenderGroup* lfo_assignment_segment = new SenderGroup("lfo_assignment", mSendAddress);
    SenderGroup* envelope_assignment_segment = new SenderGroup("envelope_assignment", mSendAddress);

    property_segment->AddSenderWidget(ui->lpf_cutoff_slider, 0);
    lfo_assignment_segment->AddSenderWidget(ui->lpf_lfo_box, 0);
    envelope_assignment_segment->AddSenderWidget(ui->lpf_envelope_box, 0);

    property_segment->AddSenderWidget(ui->hpf_cutoff_slider, 1);
    lfo_assignment_segment->AddSenderWidget(ui->hpf_lfo_box, 1);
    envelope_assignment_segment->AddSenderWidget(ui->hpf_envelope_box, 1);

    property_segment->AddSenderWidget(ui->bpf_center_slider, 2);
    property_segment->AddSenderWidget(ui->bpf_q_slider, 3);
    lfo_assignment_segment->AddSenderWidget(ui->bpf_lfo_box, 2);
    envelope_assignment_segment->AddSenderWidget(ui->bpf_envelope_box, 2);

    property_segment->AddSenderWidget(ui->gain_slider, 4);
    lfo_assignment_segment->AddSenderWidget(ui->gain_lfo_box, 4);
    envelope_assignment_segment->AddSenderWidget(ui->gain_envelope_box, 4);

    property_segment->AddSenderWidget(ui->pulse_width_slider, 5);
    lfo_assignment_segment->AddSenderWidget(ui->pulse_width_lfo_box, 5);
    envelope_assignment_segment->AddSenderWidget(ui->pulse_width_envelope_box, 5);

    lfo_assignment_segment->AddSenderWidget(ui->vibrato_lfo_box, 6);

    property_segment->AddSenderWidget(ui->tempo_spin_box, 7);

    property_segment->AddSenderWidget(ui->portamento_time_slider, 8);

    mSenderGroups.append(property_segment);
    mPatchConstants.append(property_segment->GetSenderCount());
    mSenderGroups.append(lfo_assignment_segment);
    mPatchConstants.append(lfo_assignment_segment->GetSenderCount());
    mSenderGroups.append(envelope_assignment_segment);
    mPatchConstants.append(envelope_assignment_segment->GetSenderCount());

    /**************************
     * LFO INIT
     **************************/

    SenderGroup* lfo_segment = new SenderGroup("lfo", mSendAddress);
    SenderGroup* lfo_envelope_assignment_segment = new SenderGroup("lfo_envelope_assignment", mSendAddress);
    for(int i = 0; i < 4; i++)
    {
        QGroupBox* box = ui->lfo_group_box;

        QSlider* rate = box->findChild<QSlider*>("lfo_" + QString::number(i+1) + "_rate_slider");
        QSlider* depth = box->findChild<QSlider*>("lfo_" + QString::number(i+1) + "_depth_slider");
        lfo_segment->AddSenderWidget(rate, i*2);
        lfo_segment->AddSenderWidget(depth, i*2 + 1);

        QComboBox* rate_envelope = box->findChild<QComboBox*>("lfo_" + QString::number(i+1) + "_rate_envelope");
        QComboBox* depth_envelope = box->findChild<QComboBox*>("lfo_" + QString::number(i+1) + "_depth_envelope");
        lfo_envelope_assignment_segment->AddSenderWidget(rate_envelope, i*2);
        lfo_envelope_assignment_segment->AddSenderWidget(depth_envelope, i*2 + 1);
    }

    mSenderGroups.append(lfo_segment);
    mPatchConstants.append(lfo_segment->GetSenderCount());
    mSenderGroups.append(lfo_envelope_assignment_segment);
    mPatchConstants.append(lfo_envelope_assignment_segment->GetSenderCount());

    /**************************
     * ENVELOPE INIT
     **************************/

    SenderGroup* envelope_segment = new SenderGroup("envelope", mSendAddress);
    for(int i = 0; i < 3; i++)
    {
        QGroupBox* box = ui->envelope_group_box;

        QSlider* a = box->findChild<QSlider*>("envelope_" + QString::number(i+1) + "_a");
        QSlider* d = box->findChild<QSlider*>("envelope_" + QString::number(i+1) + "_d");
        QSlider* s = box->findChild<QSlider*>("envelope_" + QString::number(i+1) + "_s");
        QSlider* r = box->findChild<QSlider*>("envelope_" + QString::number(i+1) + "_r");

        envelope_segment->AddSenderWidget(a, i*4);
        envelope_segment->AddSenderWidget(d, i*4 + 1);
        envelope_segment->AddSenderWidget(s, i*4 + 2);
        envelope_segment->AddSenderWidget(r, i*4 + 3);
    }
    mSenderGroups.append(envelope_segment);
    mPatchConstants.append(envelope_segment->GetSenderCount());

    /**************************
     * CONTROLLER INIT
     **************************/

    connect(ui->controller_map_box, SIGNAL(activated(int)), this, SLOT(LoadControllerMap(int)));

    SenderGroup* key_segment = new SenderGroup("controller/key", mSendAddress);
    key_segment->AddSenderWidget(ui->controller_key_note, 0, 0);
    key_segment->AddSenderWidget(ui->controller_key_type, 1, 0);
    mSenderGroups.append(key_segment);

    SenderGroup* tonic_segment = new SenderGroup("controller/tonic", mSendAddress);
    tonic_segment->AddSenderWidget(ui->controller_tonic, 0, 0);
    mSenderGroups.append(tonic_segment);

    SenderGroup* chord_segment = new SenderGroup("controller/chord", mSendAddress);
    chord_segment->AddSenderWidget(ui->controller_chord, 0, 0);
    mSenderGroups.append(chord_segment);

    SenderGroup* com_segment = new SenderGroup("controller/com", mSendAddress);
    com_segment->AddSenderWidget(ui->controller_allow_send, 0, 0);
    com_segment->AddSenderWidget(ui->controller_allow_receive, 1, 0);
    mSenderGroups.append(com_segment);

    SenderGroup* octave_segment = new SenderGroup("controller/octave", mSendAddress);
    octave_segment->AddSenderWidget(ui->controller_octave, 0, 3);
    mSenderGroups.append(octave_segment);

    connect(ui->controller_send_key, SIGNAL(clicked(bool)), this, SLOT(SendKey()));

    /**************************
     * MEMORY INIT
     **************************/

    QWidget* parent = ui->memory_tab;
    QButtonGroup* ones_group = new QButtonGroup;
    QButtonGroup* tens_group = new QButtonGroup;
    for(int i = 0; i < 10; i++)
    {
        QRadioButton* ones = parent->findChild<QRadioButton*>("memory_set_" + QString::number(i));
        QRadioButton* tens = parent->findChild<QRadioButton*>("memory_set_" + QString::number(i) + "0");
        ones_group->addButton(ones, i);
        tens_group->addButton(tens, i);
    }
    connect(ones_group, SIGNAL(buttonClicked(int)), ui->memory_display_ones, SLOT(display(int)));
    connect(tens_group, SIGNAL(buttonClicked(int)), ui->memory_display_tens, SLOT(display(int)));
    mButtonGroups.append(ones_group);
    mButtonGroups.append(tens_group);
    connect(ui->memory_load, SIGNAL(clicked(bool)), this, SLOT(ReadPatch()));
    connect(ui->memory_save, SIGNAL(clicked(bool)), this, SLOT(SavePatch()));

    /**************************
     * COMMUNICATION INIT
     **************************/

    lo_server_thread_add_method(*mOSCReceiver, nullptr, "ii", ControllerInputHandler, (void*)this);

    connect(ui->flush, SIGNAL(clicked(bool)), this, SLOT(Flush(void)));

    ReadPatch(true);
    return true;
}
