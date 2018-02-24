/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *main_widget;
    QGroupBox *waveform_group_box;
    QTabWidget *waveform_tab_widget;
    QWidget *additive_tab;
    QGroupBox *additive_harmonics_group_box;
    QSlider *additive_9;
    QSlider *additive_8;
    QSlider *additive_3;
    QSlider *additive_12;
    QSlider *additive_7;
    QSlider *additive_4;
    QSlider *additive_11;
    QSlider *additive_10;
    QSlider *additive_6;
    QSlider *additive_2;
    QSlider *additive_5;
    QSlider *additive_1;
    QGroupBox *additive_presets_group_box;
    QPushButton *additive_presets_sawtooth;
    QPushButton *additive_presets_square;
    QPushButton *additive_presets_triangle;
    QWidget *subtractive_tab;
    QGroupBox *subtractive_harmonics_group_box;
    QSlider *subtractive_9;
    QSlider *subtractive_8;
    QSlider *subtractive_3;
    QSlider *subtractive_12;
    QSlider *subtractive_7;
    QSlider *subtractive_4;
    QSlider *subtractive_11;
    QSlider *subtractive_10;
    QSlider *subtractive_6;
    QSlider *subtractive_2;
    QSlider *subtractive_5;
    QSlider *subtractive_1;
    QWidget *mix_tab;
    QSlider *mix_sawtooth_slider;
    QSlider *mix_pulse_slider;
    QSlider *mix_triangle_slider;
    QLabel *mix_sawtooth_label;
    QLabel *mix_pulse_label;
    QLabel *mix_triangle_label;
    QLabel *mix_sine_label;
    QSlider *mix_sine_slider;
    QGroupBox *filter_group_box;
    QGroupBox *lpf_group_box;
    QComboBox *lpf_lfo_box;
    QLabel *label;
    QLabel *label_2;
    QComboBox *lpf_envelope_box;
    QSlider *lpf_cutoff_slider;
    QLabel *label_3;
    QGroupBox *hpf_group_box;
    QLabel *label_4;
    QComboBox *hpf_lfo_box;
    QLabel *label_5;
    QSlider *hpf_cutoff_slider;
    QLabel *label_6;
    QComboBox *hpf_envelope_box;
    QGroupBox *bpf_group_box;
    QLabel *label_7;
    QComboBox *bpf_lfo_box;
    QLabel *label_8;
    QSlider *bpf_q_slider;
    QLabel *label_9;
    QComboBox *bpf_envelope_box;
    QSlider *bpf_center_slider;
    QLabel *label_10;
    QGroupBox *lfo_group_box;
    QGroupBox *lfo_1_box;
    QLabel *label_11;
    QComboBox *lfo_1_rate_envelope;
    QSlider *lfo_1_rate_slider;
    QSlider *lfo_1_depth_slider;
    QComboBox *lfo_1_depth_envelope;
    QLabel *label_12;
    QLabel *label_13;
    QGroupBox *lfo_2_box;
    QComboBox *lfo_2_depth_envelope;
    QSlider *lfo_2_depth_slider;
    QComboBox *lfo_2_rate_envelope;
    QLabel *label_14;
    QSlider *lfo_2_rate_slider;
    QLabel *label_15;
    QLabel *label_16;
    QGroupBox *lfo_3_box;
    QComboBox *lfo_3_depth_envelope;
    QSlider *lfo_3_depth_slider;
    QComboBox *lfo_3_rate_envelope;
    QLabel *label_17;
    QSlider *lfo_3_rate_slider;
    QLabel *label_18;
    QLabel *label_19;
    QGroupBox *lfo_4_box;
    QComboBox *lfo_4_depth_envelope;
    QSlider *lfo_4_depth_slider;
    QComboBox *lfo_4_rate_envelope;
    QLabel *label_20;
    QSlider *lfo_4_rate_slider;
    QLabel *label_21;
    QLabel *label_22;
    QGroupBox *effects_group_box;
    QTabWidget *effects_tab_widget;
    QWidget *reverb_tab;
    QCheckBox *reverb_enabled;
    QSlider *reverb_dry_slider;
    QSlider *reverb_roomsize_slider;
    QLabel *reverb_roomsize_label;
    QSlider *reverb_damping_slider;
    QSlider *reverb_width_slider;
    QLabel *reverb_damping_label;
    QLabel *reverb_dry_label;
    QLabel *reverb_wet_label;
    QSlider *reverb_wet_slider;
    QLabel *reverb_width_label;
    QWidget *delay_tab;
    QCheckBox *delay_enabled;
    QSlider *delay_strength_slider;
    QLabel *delay_strength_label;
    QLabel *delay_rate_label;
    QSlider *delay_rate_slider;
    QWidget *arpeggiator_tab;
    QCheckBox *arpeggiator_enabled;
    QGroupBox *arpeggiator_octaves_group_box;
    QRadioButton *arpeggiator_octaves_4;
    QRadioButton *arpeggiator_octaves_1;
    QRadioButton *arpeggiator_octaves_3;
    QRadioButton *arpeggiator_octaves_2;
    QGroupBox *arpeggiator_direction_group_box;
    QRadioButton *arpeggiator_direction_up;
    QRadioButton *arpeggiator_direction_random;
    QRadioButton *arpeggiator_direction_down;
    QGroupBox *arpeggiator_priority_group_box;
    QRadioButton *arpeggiator_priority_up;
    QRadioButton *arpeggiator_priority_down;
    QGroupBox *arpeggiator_rate_group_box;
    QRadioButton *arpeggiator_rate_x3;
    QRadioButton *arpeggiator_rate_x2;
    QRadioButton *arpeggiator_rate_x1;
    QRadioButton *arpeggiator_rate_x4;
    QCheckBox *arpeggiator_phase;
    QWidget *suboscillator_tab;
    QSlider *suboscillator_gain;
    QLabel *label_37;
    QGroupBox *groupBox;
    QRadioButton *suboscillator_octave_1;
    QRadioButton *suboscillator_octave_2;
    QWidget *portamento_tab;
    QSlider *portamento_time_slider;
    QLabel *label_35;
    QGroupBox *envelope_group_box;
    QGroupBox *envelope_1_group_box;
    QSlider *envelope_1_a;
    QSlider *envelope_1_d;
    QSlider *envelope_1_s;
    QSlider *envelope_1_r;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QGroupBox *envelope_2_group_box;
    QLabel *label_27;
    QSlider *envelope_2_r;
    QLabel *label_28;
    QSlider *envelope_2_a;
    QLabel *label_29;
    QLabel *label_30;
    QSlider *envelope_2_d;
    QSlider *envelope_2_s;
    QGroupBox *envelope_3_group_box;
    QLabel *label_31;
    QSlider *envelope_3_r;
    QLabel *label_32;
    QSlider *envelope_3_a;
    QLabel *label_33;
    QLabel *label_34;
    QSlider *envelope_3_d;
    QSlider *envelope_3_s;
    QGroupBox *groupBox_9;
    QTabWidget *misc_tab_widget;
    QWidget *tab;
    QGroupBox *groupBox_15;
    QSlider *pulse_width_slider;
    QLabel *label_42;
    QLabel *label_43;
    QComboBox *pulse_width_envelope_box;
    QComboBox *pulse_width_lfo_box;
    QGroupBox *vibrato_group_box;
    QComboBox *vibrato_lfo_box;
    QLabel *label_40;
    QGroupBox *gain_group_box;
    QSlider *gain_slider;
    QLabel *label_38;
    QLabel *label_39;
    QComboBox *gain_envelope_box;
    QComboBox *gain_lfo_box;
    QGroupBox *tempo_group_box;
    QSpinBox *tempo_spin_box;
    QLabel *label_36;
    QWidget *memory_tab;
    QLCDNumber *memory_display_ones;
    QLCDNumber *memory_display_tens;
    QWidget *widget;
    QRadioButton *memory_set_80;
    QRadioButton *memory_set_70;
    QRadioButton *memory_set_40;
    QRadioButton *memory_set_00;
    QRadioButton *memory_set_60;
    QRadioButton *memory_set_30;
    QRadioButton *memory_set_10;
    QRadioButton *memory_set_50;
    QRadioButton *memory_set_90;
    QRadioButton *memory_set_20;
    QWidget *widget_2;
    QRadioButton *memory_set_0;
    QRadioButton *memory_set_7;
    QRadioButton *memory_set_4;
    QRadioButton *memory_set_3;
    QRadioButton *memory_set_9;
    QRadioButton *memory_set_5;
    QRadioButton *memory_set_6;
    QRadioButton *memory_set_8;
    QRadioButton *memory_set_2;
    QRadioButton *memory_set_1;
    QPushButton *memory_save;
    QPushButton *memory_load;
    QWidget *controller_tab;
    QComboBox *controller_map_box;
    QLabel *label_41;
    QComboBox *controller_key_note;
    QComboBox *controller_key_type;
    QLabel *label_44;
    QLabel *label_45;
    QComboBox *controller_chord;
    QLabel *label_46;
    QComboBox *controller_tonic;
    QCheckBox *controller_allow_send;
    QCheckBox *controller_allow_receive;
    QComboBox *controller_octave;
    QLabel *label_57;
    QPushButton *controller_send_key;
    QPushButton *flush;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(949, 691);
        MainWindow->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #6ce414;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ce414, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ce414, stop: 1 #58ba10);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #6ce414;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #3"
                        "43434,\n"
"        stop:0.1 #6ce414*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4"
                        "a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #6ce414;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid #6ce414\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop"
                        ": 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #6ce414;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ce414, stop: 1 #58ba10);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png);\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ce414, stop: 1 #58ba10);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradi"
                        "ent( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ce414, stop: 1 #58ba10);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #6ce414, stop: 0.5 #58ba10, stop: 1 #6ce414);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #6ce414, stop: 1 #58ba10);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1:"
                        " 0, y1: 0, x2: 1, y2: 0, stop: 0 #6ce414, stop: 1 #58ba10);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ce414, stop: 0.5 #58ba10, stop: 1 #6ce414);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px"
                        " solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ce414, stop: 1 #58ba10);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #58ba10, stop: 1 #6ce414);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
""
                        "QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::f"
                        "loat-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #58ba10, stop:0.5 #b56c17 stop:1 #6ce414);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"     background: url(:/images/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515,"
                        " stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #58ba10;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0;\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" 	margin-left: 0px; \n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
""
                        "    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"	background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #6ce414);\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #6ce414;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #6ce414);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButt"
                        "on::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #6ce414,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #6ce414;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    background-color: #6ce414;\n"
"	border: 1px solid #6ce414;\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}"));
        main_widget = new QWidget(MainWindow);
        main_widget->setObjectName(QStringLiteral("main_widget"));
        waveform_group_box = new QGroupBox(main_widget);
        waveform_group_box->setObjectName(QStringLiteral("waveform_group_box"));
        waveform_group_box->setGeometry(QRect(10, 0, 401, 181));
        waveform_tab_widget = new QTabWidget(waveform_group_box);
        waveform_tab_widget->setObjectName(QStringLiteral("waveform_tab_widget"));
        waveform_tab_widget->setGeometry(QRect(10, 20, 381, 151));
        additive_tab = new QWidget();
        additive_tab->setObjectName(QStringLiteral("additive_tab"));
        additive_harmonics_group_box = new QGroupBox(additive_tab);
        additive_harmonics_group_box->setObjectName(QStringLiteral("additive_harmonics_group_box"));
        additive_harmonics_group_box->setGeometry(QRect(0, 0, 371, 121));
        additive_9 = new QSlider(additive_harmonics_group_box);
        additive_9->setObjectName(QStringLiteral("additive_9"));
        additive_9->setGeometry(QRect(250, 20, 20, 91));
        additive_9->setMaximum(127);
        additive_9->setOrientation(Qt::Vertical);
        additive_8 = new QSlider(additive_harmonics_group_box);
        additive_8->setObjectName(QStringLiteral("additive_8"));
        additive_8->setGeometry(QRect(220, 20, 20, 91));
        additive_8->setMaximum(127);
        additive_8->setOrientation(Qt::Vertical);
        additive_3 = new QSlider(additive_harmonics_group_box);
        additive_3->setObjectName(QStringLiteral("additive_3"));
        additive_3->setGeometry(QRect(70, 20, 20, 91));
        additive_3->setMaximum(127);
        additive_3->setOrientation(Qt::Vertical);
        additive_12 = new QSlider(additive_harmonics_group_box);
        additive_12->setObjectName(QStringLiteral("additive_12"));
        additive_12->setGeometry(QRect(340, 20, 20, 91));
        additive_12->setMaximum(127);
        additive_12->setOrientation(Qt::Vertical);
        additive_7 = new QSlider(additive_harmonics_group_box);
        additive_7->setObjectName(QStringLiteral("additive_7"));
        additive_7->setGeometry(QRect(190, 20, 20, 91));
        additive_7->setMaximum(127);
        additive_7->setOrientation(Qt::Vertical);
        additive_4 = new QSlider(additive_harmonics_group_box);
        additive_4->setObjectName(QStringLiteral("additive_4"));
        additive_4->setGeometry(QRect(100, 20, 20, 91));
        additive_4->setMaximum(127);
        additive_4->setOrientation(Qt::Vertical);
        additive_11 = new QSlider(additive_harmonics_group_box);
        additive_11->setObjectName(QStringLiteral("additive_11"));
        additive_11->setGeometry(QRect(310, 20, 20, 91));
        additive_11->setMaximum(127);
        additive_11->setOrientation(Qt::Vertical);
        additive_10 = new QSlider(additive_harmonics_group_box);
        additive_10->setObjectName(QStringLiteral("additive_10"));
        additive_10->setGeometry(QRect(280, 20, 20, 91));
        additive_10->setMaximum(127);
        additive_10->setOrientation(Qt::Vertical);
        additive_6 = new QSlider(additive_harmonics_group_box);
        additive_6->setObjectName(QStringLiteral("additive_6"));
        additive_6->setGeometry(QRect(160, 20, 20, 91));
        additive_6->setMaximum(127);
        additive_6->setOrientation(Qt::Vertical);
        additive_2 = new QSlider(additive_harmonics_group_box);
        additive_2->setObjectName(QStringLiteral("additive_2"));
        additive_2->setGeometry(QRect(40, 20, 20, 91));
        additive_2->setMaximum(127);
        additive_2->setOrientation(Qt::Vertical);
        additive_5 = new QSlider(additive_harmonics_group_box);
        additive_5->setObjectName(QStringLiteral("additive_5"));
        additive_5->setGeometry(QRect(130, 20, 20, 91));
        additive_5->setMaximum(127);
        additive_5->setOrientation(Qt::Vertical);
        additive_1 = new QSlider(additive_harmonics_group_box);
        additive_1->setObjectName(QStringLiteral("additive_1"));
        additive_1->setGeometry(QRect(10, 20, 20, 91));
        additive_1->setMaximum(127);
        additive_1->setOrientation(Qt::Vertical);
        additive_presets_group_box = new QGroupBox(additive_tab);
        additive_presets_group_box->setObjectName(QStringLiteral("additive_presets_group_box"));
        additive_presets_group_box->setGeometry(QRect(0, 140, 371, 101));
        additive_presets_sawtooth = new QPushButton(additive_presets_group_box);
        additive_presets_sawtooth->setObjectName(QStringLiteral("additive_presets_sawtooth"));
        additive_presets_sawtooth->setGeometry(QRect(10, 20, 75, 23));
        additive_presets_square = new QPushButton(additive_presets_group_box);
        additive_presets_square->setObjectName(QStringLiteral("additive_presets_square"));
        additive_presets_square->setGeometry(QRect(10, 50, 75, 23));
        additive_presets_triangle = new QPushButton(additive_presets_group_box);
        additive_presets_triangle->setObjectName(QStringLiteral("additive_presets_triangle"));
        additive_presets_triangle->setGeometry(QRect(100, 20, 75, 23));
        waveform_tab_widget->addTab(additive_tab, QString());
        subtractive_tab = new QWidget();
        subtractive_tab->setObjectName(QStringLiteral("subtractive_tab"));
        subtractive_harmonics_group_box = new QGroupBox(subtractive_tab);
        subtractive_harmonics_group_box->setObjectName(QStringLiteral("subtractive_harmonics_group_box"));
        subtractive_harmonics_group_box->setGeometry(QRect(0, 0, 371, 121));
        subtractive_9 = new QSlider(subtractive_harmonics_group_box);
        subtractive_9->setObjectName(QStringLiteral("subtractive_9"));
        subtractive_9->setGeometry(QRect(250, 20, 20, 91));
        subtractive_9->setMaximum(127);
        subtractive_9->setOrientation(Qt::Vertical);
        subtractive_8 = new QSlider(subtractive_harmonics_group_box);
        subtractive_8->setObjectName(QStringLiteral("subtractive_8"));
        subtractive_8->setGeometry(QRect(220, 20, 20, 91));
        subtractive_8->setMaximum(127);
        subtractive_8->setOrientation(Qt::Vertical);
        subtractive_3 = new QSlider(subtractive_harmonics_group_box);
        subtractive_3->setObjectName(QStringLiteral("subtractive_3"));
        subtractive_3->setGeometry(QRect(70, 20, 20, 91));
        subtractive_3->setMaximum(127);
        subtractive_3->setOrientation(Qt::Vertical);
        subtractive_12 = new QSlider(subtractive_harmonics_group_box);
        subtractive_12->setObjectName(QStringLiteral("subtractive_12"));
        subtractive_12->setGeometry(QRect(340, 20, 20, 91));
        subtractive_12->setMaximum(127);
        subtractive_12->setOrientation(Qt::Vertical);
        subtractive_7 = new QSlider(subtractive_harmonics_group_box);
        subtractive_7->setObjectName(QStringLiteral("subtractive_7"));
        subtractive_7->setGeometry(QRect(190, 20, 20, 91));
        subtractive_7->setMaximum(127);
        subtractive_7->setOrientation(Qt::Vertical);
        subtractive_4 = new QSlider(subtractive_harmonics_group_box);
        subtractive_4->setObjectName(QStringLiteral("subtractive_4"));
        subtractive_4->setGeometry(QRect(100, 20, 20, 91));
        subtractive_4->setMaximum(127);
        subtractive_4->setOrientation(Qt::Vertical);
        subtractive_11 = new QSlider(subtractive_harmonics_group_box);
        subtractive_11->setObjectName(QStringLiteral("subtractive_11"));
        subtractive_11->setGeometry(QRect(310, 20, 20, 91));
        subtractive_11->setMaximum(127);
        subtractive_11->setOrientation(Qt::Vertical);
        subtractive_10 = new QSlider(subtractive_harmonics_group_box);
        subtractive_10->setObjectName(QStringLiteral("subtractive_10"));
        subtractive_10->setGeometry(QRect(280, 20, 20, 91));
        subtractive_10->setMaximum(127);
        subtractive_10->setOrientation(Qt::Vertical);
        subtractive_6 = new QSlider(subtractive_harmonics_group_box);
        subtractive_6->setObjectName(QStringLiteral("subtractive_6"));
        subtractive_6->setGeometry(QRect(160, 20, 20, 91));
        subtractive_6->setMaximum(127);
        subtractive_6->setOrientation(Qt::Vertical);
        subtractive_2 = new QSlider(subtractive_harmonics_group_box);
        subtractive_2->setObjectName(QStringLiteral("subtractive_2"));
        subtractive_2->setGeometry(QRect(40, 20, 20, 91));
        subtractive_2->setMaximum(127);
        subtractive_2->setOrientation(Qt::Vertical);
        subtractive_5 = new QSlider(subtractive_harmonics_group_box);
        subtractive_5->setObjectName(QStringLiteral("subtractive_5"));
        subtractive_5->setGeometry(QRect(130, 20, 20, 91));
        subtractive_5->setMaximum(127);
        subtractive_5->setOrientation(Qt::Vertical);
        subtractive_1 = new QSlider(subtractive_harmonics_group_box);
        subtractive_1->setObjectName(QStringLiteral("subtractive_1"));
        subtractive_1->setGeometry(QRect(10, 20, 20, 91));
        subtractive_1->setMaximum(127);
        subtractive_1->setOrientation(Qt::Vertical);
        waveform_tab_widget->addTab(subtractive_tab, QString());
        mix_tab = new QWidget();
        mix_tab->setObjectName(QStringLiteral("mix_tab"));
        mix_sawtooth_slider = new QSlider(mix_tab);
        mix_sawtooth_slider->setObjectName(QStringLiteral("mix_sawtooth_slider"));
        mix_sawtooth_slider->setGeometry(QRect(60, 20, 19, 101));
        mix_sawtooth_slider->setMaximum(127);
        mix_sawtooth_slider->setOrientation(Qt::Vertical);
        mix_pulse_slider = new QSlider(mix_tab);
        mix_pulse_slider->setObjectName(QStringLiteral("mix_pulse_slider"));
        mix_pulse_slider->setGeometry(QRect(140, 20, 19, 101));
        mix_pulse_slider->setMaximum(127);
        mix_pulse_slider->setOrientation(Qt::Vertical);
        mix_triangle_slider = new QSlider(mix_tab);
        mix_triangle_slider->setObjectName(QStringLiteral("mix_triangle_slider"));
        mix_triangle_slider->setGeometry(QRect(220, 20, 19, 101));
        mix_triangle_slider->setMaximum(127);
        mix_triangle_slider->setOrientation(Qt::Vertical);
        mix_sawtooth_label = new QLabel(mix_tab);
        mix_sawtooth_label->setObjectName(QStringLiteral("mix_sawtooth_label"));
        mix_sawtooth_label->setGeometry(QRect(50, 0, 47, 21));
        mix_pulse_label = new QLabel(mix_tab);
        mix_pulse_label->setObjectName(QStringLiteral("mix_pulse_label"));
        mix_pulse_label->setGeometry(QRect(140, 0, 31, 21));
        mix_triangle_label = new QLabel(mix_tab);
        mix_triangle_label->setObjectName(QStringLiteral("mix_triangle_label"));
        mix_triangle_label->setGeometry(QRect(210, 0, 47, 16));
        mix_sine_label = new QLabel(mix_tab);
        mix_sine_label->setObjectName(QStringLiteral("mix_sine_label"));
        mix_sine_label->setGeometry(QRect(300, 0, 21, 21));
        mix_sine_slider = new QSlider(mix_tab);
        mix_sine_slider->setObjectName(QStringLiteral("mix_sine_slider"));
        mix_sine_slider->setGeometry(QRect(300, 20, 19, 101));
        mix_sine_slider->setMaximum(127);
        mix_sine_slider->setOrientation(Qt::Vertical);
        waveform_tab_widget->addTab(mix_tab, QString());
        filter_group_box = new QGroupBox(main_widget);
        filter_group_box->setObjectName(QStringLiteral("filter_group_box"));
        filter_group_box->setGeometry(QRect(420, 0, 511, 181));
        lpf_group_box = new QGroupBox(filter_group_box);
        lpf_group_box->setObjectName(QStringLiteral("lpf_group_box"));
        lpf_group_box->setGeometry(QRect(0, 20, 171, 161));
        lpf_lfo_box = new QComboBox(lpf_group_box);
        lpf_lfo_box->setObjectName(QStringLiteral("lpf_lfo_box"));
        lpf_lfo_box->setGeometry(QRect(20, 50, 51, 22));
        label = new QLabel(lpf_group_box);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 47, 16));
        label_2 = new QLabel(lpf_group_box);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 47, 16));
        lpf_envelope_box = new QComboBox(lpf_group_box);
        lpf_envelope_box->setObjectName(QStringLiteral("lpf_envelope_box"));
        lpf_envelope_box->setGeometry(QRect(20, 110, 51, 22));
        lpf_cutoff_slider = new QSlider(lpf_group_box);
        lpf_cutoff_slider->setObjectName(QStringLiteral("lpf_cutoff_slider"));
        lpf_cutoff_slider->setGeometry(QRect(120, 40, 20, 111));
        lpf_cutoff_slider->setMaximum(127);
        lpf_cutoff_slider->setOrientation(Qt::Vertical);
        label_3 = new QLabel(lpf_group_box);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(116, 20, 41, 21));
        hpf_group_box = new QGroupBox(filter_group_box);
        hpf_group_box->setObjectName(QStringLiteral("hpf_group_box"));
        hpf_group_box->setGeometry(QRect(170, 20, 171, 161));
        label_4 = new QLabel(hpf_group_box);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 30, 47, 16));
        hpf_lfo_box = new QComboBox(hpf_group_box);
        hpf_lfo_box->setObjectName(QStringLiteral("hpf_lfo_box"));
        hpf_lfo_box->setGeometry(QRect(20, 50, 51, 22));
        label_5 = new QLabel(hpf_group_box);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 90, 47, 16));
        hpf_cutoff_slider = new QSlider(hpf_group_box);
        hpf_cutoff_slider->setObjectName(QStringLiteral("hpf_cutoff_slider"));
        hpf_cutoff_slider->setGeometry(QRect(120, 40, 20, 111));
        hpf_cutoff_slider->setMaximum(127);
        hpf_cutoff_slider->setOrientation(Qt::Vertical);
        label_6 = new QLabel(hpf_group_box);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(116, 20, 41, 21));
        hpf_envelope_box = new QComboBox(hpf_group_box);
        hpf_envelope_box->setObjectName(QStringLiteral("hpf_envelope_box"));
        hpf_envelope_box->setGeometry(QRect(20, 110, 51, 22));
        bpf_group_box = new QGroupBox(filter_group_box);
        bpf_group_box->setObjectName(QStringLiteral("bpf_group_box"));
        bpf_group_box->setGeometry(QRect(340, 20, 171, 161));
        label_7 = new QLabel(bpf_group_box);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 30, 51, 16));
        bpf_lfo_box = new QComboBox(bpf_group_box);
        bpf_lfo_box->setObjectName(QStringLiteral("bpf_lfo_box"));
        bpf_lfo_box->setGeometry(QRect(20, 50, 51, 22));
        label_8 = new QLabel(bpf_group_box);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 90, 47, 16));
        bpf_q_slider = new QSlider(bpf_group_box);
        bpf_q_slider->setObjectName(QStringLiteral("bpf_q_slider"));
        bpf_q_slider->setGeometry(QRect(140, 40, 20, 111));
        bpf_q_slider->setMaximum(127);
        bpf_q_slider->setOrientation(Qt::Vertical);
        label_9 = new QLabel(bpf_group_box);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(140, 20, 21, 21));
        bpf_envelope_box = new QComboBox(bpf_group_box);
        bpf_envelope_box->setObjectName(QStringLiteral("bpf_envelope_box"));
        bpf_envelope_box->setGeometry(QRect(20, 110, 51, 22));
        bpf_center_slider = new QSlider(bpf_group_box);
        bpf_center_slider->setObjectName(QStringLiteral("bpf_center_slider"));
        bpf_center_slider->setGeometry(QRect(90, 40, 20, 111));
        bpf_center_slider->setMaximum(127);
        bpf_center_slider->setOrientation(Qt::Vertical);
        label_10 = new QLabel(bpf_group_box);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 20, 41, 21));
        lfo_group_box = new QGroupBox(main_widget);
        lfo_group_box->setObjectName(QStringLiteral("lfo_group_box"));
        lfo_group_box->setGeometry(QRect(370, 190, 561, 201));
        lfo_1_box = new QGroupBox(lfo_group_box);
        lfo_1_box->setObjectName(QStringLiteral("lfo_1_box"));
        lfo_1_box->setGeometry(QRect(0, 20, 141, 181));
        label_11 = new QLabel(lfo_1_box);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 10, 51, 16));
        lfo_1_rate_envelope = new QComboBox(lfo_1_box);
        lfo_1_rate_envelope->setObjectName(QStringLiteral("lfo_1_rate_envelope"));
        lfo_1_rate_envelope->setGeometry(QRect(10, 30, 51, 22));
        lfo_1_rate_slider = new QSlider(lfo_1_box);
        lfo_1_rate_slider->setObjectName(QStringLiteral("lfo_1_rate_slider"));
        lfo_1_rate_slider->setGeometry(QRect(30, 80, 20, 91));
        lfo_1_rate_slider->setMaximum(127);
        lfo_1_rate_slider->setOrientation(Qt::Vertical);
        lfo_1_depth_slider = new QSlider(lfo_1_box);
        lfo_1_depth_slider->setObjectName(QStringLiteral("lfo_1_depth_slider"));
        lfo_1_depth_slider->setGeometry(QRect(90, 80, 20, 91));
        lfo_1_depth_slider->setMaximum(127);
        lfo_1_depth_slider->setOrientation(Qt::Vertical);
        lfo_1_depth_envelope = new QComboBox(lfo_1_box);
        lfo_1_depth_envelope->setObjectName(QStringLiteral("lfo_1_depth_envelope"));
        lfo_1_depth_envelope->setGeometry(QRect(80, 30, 51, 22));
        label_12 = new QLabel(lfo_1_box);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 60, 41, 21));
        label_13 = new QLabel(lfo_1_box);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(80, 60, 31, 21));
        lfo_2_box = new QGroupBox(lfo_group_box);
        lfo_2_box->setObjectName(QStringLiteral("lfo_2_box"));
        lfo_2_box->setGeometry(QRect(140, 20, 141, 181));
        lfo_2_depth_envelope = new QComboBox(lfo_2_box);
        lfo_2_depth_envelope->setObjectName(QStringLiteral("lfo_2_depth_envelope"));
        lfo_2_depth_envelope->setGeometry(QRect(80, 30, 51, 22));
        lfo_2_depth_slider = new QSlider(lfo_2_box);
        lfo_2_depth_slider->setObjectName(QStringLiteral("lfo_2_depth_slider"));
        lfo_2_depth_slider->setGeometry(QRect(90, 80, 20, 91));
        lfo_2_depth_slider->setMaximum(127);
        lfo_2_depth_slider->setOrientation(Qt::Vertical);
        lfo_2_rate_envelope = new QComboBox(lfo_2_box);
        lfo_2_rate_envelope->setObjectName(QStringLiteral("lfo_2_rate_envelope"));
        lfo_2_rate_envelope->setGeometry(QRect(10, 30, 51, 22));
        label_14 = new QLabel(lfo_2_box);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(50, 10, 51, 16));
        lfo_2_rate_slider = new QSlider(lfo_2_box);
        lfo_2_rate_slider->setObjectName(QStringLiteral("lfo_2_rate_slider"));
        lfo_2_rate_slider->setGeometry(QRect(30, 80, 20, 91));
        lfo_2_rate_slider->setMaximum(127);
        lfo_2_rate_slider->setOrientation(Qt::Vertical);
        label_15 = new QLabel(lfo_2_box);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(80, 60, 31, 21));
        label_16 = new QLabel(lfo_2_box);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 60, 41, 21));
        lfo_3_box = new QGroupBox(lfo_group_box);
        lfo_3_box->setObjectName(QStringLiteral("lfo_3_box"));
        lfo_3_box->setGeometry(QRect(280, 20, 141, 181));
        lfo_3_depth_envelope = new QComboBox(lfo_3_box);
        lfo_3_depth_envelope->setObjectName(QStringLiteral("lfo_3_depth_envelope"));
        lfo_3_depth_envelope->setGeometry(QRect(80, 30, 51, 22));
        lfo_3_depth_slider = new QSlider(lfo_3_box);
        lfo_3_depth_slider->setObjectName(QStringLiteral("lfo_3_depth_slider"));
        lfo_3_depth_slider->setGeometry(QRect(90, 80, 20, 91));
        lfo_3_depth_slider->setMaximum(127);
        lfo_3_depth_slider->setOrientation(Qt::Vertical);
        lfo_3_rate_envelope = new QComboBox(lfo_3_box);
        lfo_3_rate_envelope->setObjectName(QStringLiteral("lfo_3_rate_envelope"));
        lfo_3_rate_envelope->setGeometry(QRect(10, 30, 51, 22));
        label_17 = new QLabel(lfo_3_box);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(50, 10, 51, 16));
        lfo_3_rate_slider = new QSlider(lfo_3_box);
        lfo_3_rate_slider->setObjectName(QStringLiteral("lfo_3_rate_slider"));
        lfo_3_rate_slider->setGeometry(QRect(30, 80, 20, 91));
        lfo_3_rate_slider->setMaximum(127);
        lfo_3_rate_slider->setOrientation(Qt::Vertical);
        label_18 = new QLabel(lfo_3_box);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(80, 60, 31, 21));
        label_19 = new QLabel(lfo_3_box);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 60, 41, 21));
        lfo_4_box = new QGroupBox(lfo_group_box);
        lfo_4_box->setObjectName(QStringLiteral("lfo_4_box"));
        lfo_4_box->setGeometry(QRect(420, 20, 141, 181));
        lfo_4_depth_envelope = new QComboBox(lfo_4_box);
        lfo_4_depth_envelope->setObjectName(QStringLiteral("lfo_4_depth_envelope"));
        lfo_4_depth_envelope->setGeometry(QRect(80, 30, 51, 22));
        lfo_4_depth_slider = new QSlider(lfo_4_box);
        lfo_4_depth_slider->setObjectName(QStringLiteral("lfo_4_depth_slider"));
        lfo_4_depth_slider->setGeometry(QRect(90, 80, 20, 91));
        lfo_4_depth_slider->setMaximum(127);
        lfo_4_depth_slider->setOrientation(Qt::Vertical);
        lfo_4_rate_envelope = new QComboBox(lfo_4_box);
        lfo_4_rate_envelope->setObjectName(QStringLiteral("lfo_4_rate_envelope"));
        lfo_4_rate_envelope->setGeometry(QRect(10, 30, 51, 22));
        label_20 = new QLabel(lfo_4_box);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(50, 10, 51, 16));
        lfo_4_rate_slider = new QSlider(lfo_4_box);
        lfo_4_rate_slider->setObjectName(QStringLiteral("lfo_4_rate_slider"));
        lfo_4_rate_slider->setGeometry(QRect(30, 80, 20, 91));
        lfo_4_rate_slider->setMaximum(127);
        lfo_4_rate_slider->setOrientation(Qt::Vertical);
        label_21 = new QLabel(lfo_4_box);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(80, 60, 31, 21));
        label_22 = new QLabel(lfo_4_box);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(30, 60, 41, 21));
        effects_group_box = new QGroupBox(main_widget);
        effects_group_box->setObjectName(QStringLiteral("effects_group_box"));
        effects_group_box->setGeometry(QRect(10, 400, 321, 201));
        effects_tab_widget = new QTabWidget(effects_group_box);
        effects_tab_widget->setObjectName(QStringLiteral("effects_tab_widget"));
        effects_tab_widget->setGeometry(QRect(10, 20, 301, 171));
        reverb_tab = new QWidget();
        reverb_tab->setObjectName(QStringLiteral("reverb_tab"));
        reverb_enabled = new QCheckBox(reverb_tab);
        reverb_enabled->setObjectName(QStringLiteral("reverb_enabled"));
        reverb_enabled->setGeometry(QRect(10, 10, 70, 17));
        reverb_dry_slider = new QSlider(reverb_tab);
        reverb_dry_slider->setObjectName(QStringLiteral("reverb_dry_slider"));
        reverb_dry_slider->setGeometry(QRect(200, 50, 20, 81));
        reverb_dry_slider->setMaximum(127);
        reverb_dry_slider->setOrientation(Qt::Vertical);
        reverb_roomsize_slider = new QSlider(reverb_tab);
        reverb_roomsize_slider->setObjectName(QStringLiteral("reverb_roomsize_slider"));
        reverb_roomsize_slider->setGeometry(QRect(20, 50, 20, 81));
        reverb_roomsize_slider->setMaximum(127);
        reverb_roomsize_slider->setOrientation(Qt::Vertical);
        reverb_roomsize_label = new QLabel(reverb_tab);
        reverb_roomsize_label->setObjectName(QStringLiteral("reverb_roomsize_label"));
        reverb_roomsize_label->setGeometry(QRect(10, 30, 47, 16));
        reverb_damping_slider = new QSlider(reverb_tab);
        reverb_damping_slider->setObjectName(QStringLiteral("reverb_damping_slider"));
        reverb_damping_slider->setGeometry(QRect(80, 50, 20, 81));
        reverb_damping_slider->setMaximum(127);
        reverb_damping_slider->setOrientation(Qt::Vertical);
        reverb_width_slider = new QSlider(reverb_tab);
        reverb_width_slider->setObjectName(QStringLiteral("reverb_width_slider"));
        reverb_width_slider->setGeometry(QRect(140, 50, 20, 81));
        reverb_width_slider->setMaximum(127);
        reverb_width_slider->setOrientation(Qt::Vertical);
        reverb_damping_label = new QLabel(reverb_tab);
        reverb_damping_label->setObjectName(QStringLiteral("reverb_damping_label"));
        reverb_damping_label->setGeometry(QRect(70, 30, 47, 16));
        reverb_dry_label = new QLabel(reverb_tab);
        reverb_dry_label->setObjectName(QStringLiteral("reverb_dry_label"));
        reverb_dry_label->setGeometry(QRect(200, 30, 47, 16));
        reverb_wet_label = new QLabel(reverb_tab);
        reverb_wet_label->setObjectName(QStringLiteral("reverb_wet_label"));
        reverb_wet_label->setGeometry(QRect(260, 30, 31, 16));
        reverb_wet_slider = new QSlider(reverb_tab);
        reverb_wet_slider->setObjectName(QStringLiteral("reverb_wet_slider"));
        reverb_wet_slider->setGeometry(QRect(260, 50, 20, 81));
        reverb_wet_slider->setMaximum(127);
        reverb_wet_slider->setOrientation(Qt::Vertical);
        reverb_width_label = new QLabel(reverb_tab);
        reverb_width_label->setObjectName(QStringLiteral("reverb_width_label"));
        reverb_width_label->setGeometry(QRect(130, 30, 41, 16));
        effects_tab_widget->addTab(reverb_tab, QString());
        delay_tab = new QWidget();
        delay_tab->setObjectName(QStringLiteral("delay_tab"));
        delay_enabled = new QCheckBox(delay_tab);
        delay_enabled->setObjectName(QStringLiteral("delay_enabled"));
        delay_enabled->setGeometry(QRect(10, 10, 70, 17));
        delay_strength_slider = new QSlider(delay_tab);
        delay_strength_slider->setObjectName(QStringLiteral("delay_strength_slider"));
        delay_strength_slider->setGeometry(QRect(70, 50, 20, 81));
        delay_strength_slider->setMaximum(127);
        delay_strength_slider->setOrientation(Qt::Vertical);
        delay_strength_label = new QLabel(delay_tab);
        delay_strength_label->setObjectName(QStringLiteral("delay_strength_label"));
        delay_strength_label->setGeometry(QRect(60, 30, 47, 16));
        delay_rate_label = new QLabel(delay_tab);
        delay_rate_label->setObjectName(QStringLiteral("delay_rate_label"));
        delay_rate_label->setGeometry(QRect(170, 30, 47, 13));
        delay_rate_slider = new QSlider(delay_tab);
        delay_rate_slider->setObjectName(QStringLiteral("delay_rate_slider"));
        delay_rate_slider->setGeometry(QRect(170, 50, 20, 81));
        delay_rate_slider->setMaximum(3);
        delay_rate_slider->setOrientation(Qt::Vertical);
        delay_rate_slider->setTickPosition(QSlider::TicksAbove);
        delay_rate_slider->setTickInterval(1);
        effects_tab_widget->addTab(delay_tab, QString());
        arpeggiator_tab = new QWidget();
        arpeggiator_tab->setObjectName(QStringLiteral("arpeggiator_tab"));
        arpeggiator_enabled = new QCheckBox(arpeggiator_tab);
        arpeggiator_enabled->setObjectName(QStringLiteral("arpeggiator_enabled"));
        arpeggiator_enabled->setGeometry(QRect(10, 10, 70, 17));
        arpeggiator_octaves_group_box = new QGroupBox(arpeggiator_tab);
        arpeggiator_octaves_group_box->setObjectName(QStringLiteral("arpeggiator_octaves_group_box"));
        arpeggiator_octaves_group_box->setGeometry(QRect(0, 40, 71, 101));
        arpeggiator_octaves_4 = new QRadioButton(arpeggiator_octaves_group_box);
        arpeggiator_octaves_4->setObjectName(QStringLiteral("arpeggiator_octaves_4"));
        arpeggiator_octaves_4->setGeometry(QRect(10, 80, 31, 17));
        arpeggiator_octaves_1 = new QRadioButton(arpeggiator_octaves_group_box);
        arpeggiator_octaves_1->setObjectName(QStringLiteral("arpeggiator_octaves_1"));
        arpeggiator_octaves_1->setGeometry(QRect(10, 20, 31, 17));
        arpeggiator_octaves_3 = new QRadioButton(arpeggiator_octaves_group_box);
        arpeggiator_octaves_3->setObjectName(QStringLiteral("arpeggiator_octaves_3"));
        arpeggiator_octaves_3->setGeometry(QRect(10, 60, 31, 17));
        arpeggiator_octaves_2 = new QRadioButton(arpeggiator_octaves_group_box);
        arpeggiator_octaves_2->setObjectName(QStringLiteral("arpeggiator_octaves_2"));
        arpeggiator_octaves_2->setGeometry(QRect(10, 40, 31, 17));
        arpeggiator_direction_group_box = new QGroupBox(arpeggiator_tab);
        arpeggiator_direction_group_box->setObjectName(QStringLiteral("arpeggiator_direction_group_box"));
        arpeggiator_direction_group_box->setGeometry(QRect(70, 0, 111, 81));
        arpeggiator_direction_up = new QRadioButton(arpeggiator_direction_group_box);
        arpeggiator_direction_up->setObjectName(QStringLiteral("arpeggiator_direction_up"));
        arpeggiator_direction_up->setGeometry(QRect(10, 20, 51, 17));
        arpeggiator_direction_random = new QRadioButton(arpeggiator_direction_group_box);
        arpeggiator_direction_random->setObjectName(QStringLiteral("arpeggiator_direction_random"));
        arpeggiator_direction_random->setGeometry(QRect(10, 60, 61, 17));
        arpeggiator_direction_down = new QRadioButton(arpeggiator_direction_group_box);
        arpeggiator_direction_down->setObjectName(QStringLiteral("arpeggiator_direction_down"));
        arpeggiator_direction_down->setGeometry(QRect(10, 40, 51, 17));
        arpeggiator_priority_group_box = new QGroupBox(arpeggiator_tab);
        arpeggiator_priority_group_box->setObjectName(QStringLiteral("arpeggiator_priority_group_box"));
        arpeggiator_priority_group_box->setGeometry(QRect(70, 80, 111, 61));
        arpeggiator_priority_up = new QRadioButton(arpeggiator_priority_group_box);
        arpeggiator_priority_up->setObjectName(QStringLiteral("arpeggiator_priority_up"));
        arpeggiator_priority_up->setGeometry(QRect(10, 20, 51, 17));
        arpeggiator_priority_down = new QRadioButton(arpeggiator_priority_group_box);
        arpeggiator_priority_down->setObjectName(QStringLiteral("arpeggiator_priority_down"));
        arpeggiator_priority_down->setGeometry(QRect(10, 40, 51, 17));
        arpeggiator_rate_group_box = new QGroupBox(arpeggiator_tab);
        arpeggiator_rate_group_box->setObjectName(QStringLiteral("arpeggiator_rate_group_box"));
        arpeggiator_rate_group_box->setGeometry(QRect(180, 0, 111, 111));
        arpeggiator_rate_x3 = new QRadioButton(arpeggiator_rate_group_box);
        arpeggiator_rate_x3->setObjectName(QStringLiteral("arpeggiator_rate_x3"));
        arpeggiator_rate_x3->setGeometry(QRect(10, 60, 61, 17));
        arpeggiator_rate_x2 = new QRadioButton(arpeggiator_rate_group_box);
        arpeggiator_rate_x2->setObjectName(QStringLiteral("arpeggiator_rate_x2"));
        arpeggiator_rate_x2->setGeometry(QRect(10, 40, 61, 17));
        arpeggiator_rate_x1 = new QRadioButton(arpeggiator_rate_group_box);
        arpeggiator_rate_x1->setObjectName(QStringLiteral("arpeggiator_rate_x1"));
        arpeggiator_rate_x1->setGeometry(QRect(10, 20, 61, 17));
        arpeggiator_rate_x4 = new QRadioButton(arpeggiator_rate_group_box);
        arpeggiator_rate_x4->setObjectName(QStringLiteral("arpeggiator_rate_x4"));
        arpeggiator_rate_x4->setGeometry(QRect(10, 80, 61, 17));
        arpeggiator_phase = new QCheckBox(arpeggiator_tab);
        arpeggiator_phase->setObjectName(QStringLiteral("arpeggiator_phase"));
        arpeggiator_phase->setGeometry(QRect(200, 120, 81, 17));
        effects_tab_widget->addTab(arpeggiator_tab, QString());
        suboscillator_tab = new QWidget();
        suboscillator_tab->setObjectName(QStringLiteral("suboscillator_tab"));
        suboscillator_gain = new QSlider(suboscillator_tab);
        suboscillator_gain->setObjectName(QStringLiteral("suboscillator_gain"));
        suboscillator_gain->setGeometry(QRect(10, 20, 20, 121));
        suboscillator_gain->setMaximum(127);
        suboscillator_gain->setOrientation(Qt::Vertical);
        label_37 = new QLabel(suboscillator_tab);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(10, 0, 31, 16));
        groupBox = new QGroupBox(suboscillator_tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 10, 61, 71));
        suboscillator_octave_1 = new QRadioButton(groupBox);
        suboscillator_octave_1->setObjectName(QStringLiteral("suboscillator_octave_1"));
        suboscillator_octave_1->setGeometry(QRect(10, 20, 31, 17));
        suboscillator_octave_2 = new QRadioButton(groupBox);
        suboscillator_octave_2->setObjectName(QStringLiteral("suboscillator_octave_2"));
        suboscillator_octave_2->setGeometry(QRect(10, 40, 31, 17));
        effects_tab_widget->addTab(suboscillator_tab, QString());
        portamento_tab = new QWidget();
        portamento_tab->setObjectName(QStringLiteral("portamento_tab"));
        portamento_time_slider = new QSlider(portamento_tab);
        portamento_time_slider->setObjectName(QStringLiteral("portamento_time_slider"));
        portamento_time_slider->setGeometry(QRect(10, 20, 20, 121));
        portamento_time_slider->setMaximum(127);
        portamento_time_slider->setOrientation(Qt::Vertical);
        label_35 = new QLabel(portamento_tab);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(10, 0, 31, 16));
        effects_tab_widget->addTab(portamento_tab, QString());
        envelope_group_box = new QGroupBox(main_widget);
        envelope_group_box->setObjectName(QStringLiteral("envelope_group_box"));
        envelope_group_box->setGeometry(QRect(340, 400, 591, 201));
        envelope_1_group_box = new QGroupBox(envelope_group_box);
        envelope_1_group_box->setObjectName(QStringLiteral("envelope_1_group_box"));
        envelope_1_group_box->setGeometry(QRect(0, 19, 201, 181));
        envelope_1_a = new QSlider(envelope_1_group_box);
        envelope_1_a->setObjectName(QStringLiteral("envelope_1_a"));
        envelope_1_a->setGeometry(QRect(10, 50, 20, 121));
        envelope_1_a->setMaximum(127);
        envelope_1_a->setOrientation(Qt::Vertical);
        envelope_1_d = new QSlider(envelope_1_group_box);
        envelope_1_d->setObjectName(QStringLiteral("envelope_1_d"));
        envelope_1_d->setGeometry(QRect(60, 50, 20, 121));
        envelope_1_d->setMaximum(127);
        envelope_1_d->setOrientation(Qt::Vertical);
        envelope_1_s = new QSlider(envelope_1_group_box);
        envelope_1_s->setObjectName(QStringLiteral("envelope_1_s"));
        envelope_1_s->setGeometry(QRect(120, 50, 20, 121));
        envelope_1_s->setMaximum(127);
        envelope_1_s->setValue(0);
        envelope_1_s->setOrientation(Qt::Vertical);
        envelope_1_r = new QSlider(envelope_1_group_box);
        envelope_1_r->setObjectName(QStringLiteral("envelope_1_r"));
        envelope_1_r->setGeometry(QRect(170, 50, 20, 121));
        envelope_1_r->setMaximum(127);
        envelope_1_r->setOrientation(Qt::Vertical);
        label_23 = new QLabel(envelope_1_group_box);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 20, 16, 31));
        label_24 = new QLabel(envelope_1_group_box);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(70, 20, 16, 31));
        label_25 = new QLabel(envelope_1_group_box);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(130, 20, 16, 31));
        label_26 = new QLabel(envelope_1_group_box);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(180, 20, 16, 31));
        envelope_2_group_box = new QGroupBox(envelope_group_box);
        envelope_2_group_box->setObjectName(QStringLiteral("envelope_2_group_box"));
        envelope_2_group_box->setGeometry(QRect(200, 20, 201, 181));
        label_27 = new QLabel(envelope_2_group_box);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(20, 20, 16, 31));
        envelope_2_r = new QSlider(envelope_2_group_box);
        envelope_2_r->setObjectName(QStringLiteral("envelope_2_r"));
        envelope_2_r->setGeometry(QRect(170, 50, 20, 121));
        envelope_2_r->setMaximum(127);
        envelope_2_r->setOrientation(Qt::Vertical);
        label_28 = new QLabel(envelope_2_group_box);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(130, 20, 16, 31));
        envelope_2_a = new QSlider(envelope_2_group_box);
        envelope_2_a->setObjectName(QStringLiteral("envelope_2_a"));
        envelope_2_a->setGeometry(QRect(10, 50, 20, 121));
        envelope_2_a->setMaximum(127);
        envelope_2_a->setOrientation(Qt::Vertical);
        label_29 = new QLabel(envelope_2_group_box);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(180, 20, 16, 31));
        label_30 = new QLabel(envelope_2_group_box);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(70, 20, 16, 31));
        envelope_2_d = new QSlider(envelope_2_group_box);
        envelope_2_d->setObjectName(QStringLiteral("envelope_2_d"));
        envelope_2_d->setGeometry(QRect(60, 50, 20, 121));
        envelope_2_d->setMaximum(127);
        envelope_2_d->setOrientation(Qt::Vertical);
        envelope_2_s = new QSlider(envelope_2_group_box);
        envelope_2_s->setObjectName(QStringLiteral("envelope_2_s"));
        envelope_2_s->setGeometry(QRect(120, 50, 20, 121));
        envelope_2_s->setMaximum(127);
        envelope_2_s->setOrientation(Qt::Vertical);
        envelope_3_group_box = new QGroupBox(envelope_group_box);
        envelope_3_group_box->setObjectName(QStringLiteral("envelope_3_group_box"));
        envelope_3_group_box->setGeometry(QRect(400, 20, 191, 181));
        label_31 = new QLabel(envelope_3_group_box);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(20, 20, 16, 31));
        envelope_3_r = new QSlider(envelope_3_group_box);
        envelope_3_r->setObjectName(QStringLiteral("envelope_3_r"));
        envelope_3_r->setGeometry(QRect(160, 50, 20, 121));
        envelope_3_r->setMaximum(127);
        envelope_3_r->setOrientation(Qt::Vertical);
        label_32 = new QLabel(envelope_3_group_box);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(120, 20, 16, 31));
        envelope_3_a = new QSlider(envelope_3_group_box);
        envelope_3_a->setObjectName(QStringLiteral("envelope_3_a"));
        envelope_3_a->setGeometry(QRect(10, 50, 20, 121));
        envelope_3_a->setMaximum(127);
        envelope_3_a->setOrientation(Qt::Vertical);
        label_33 = new QLabel(envelope_3_group_box);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(170, 20, 16, 31));
        label_34 = new QLabel(envelope_3_group_box);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(70, 20, 16, 31));
        envelope_3_d = new QSlider(envelope_3_group_box);
        envelope_3_d->setObjectName(QStringLiteral("envelope_3_d"));
        envelope_3_d->setGeometry(QRect(60, 50, 20, 121));
        envelope_3_d->setMaximum(127);
        envelope_3_d->setOrientation(Qt::Vertical);
        envelope_3_s = new QSlider(envelope_3_group_box);
        envelope_3_s->setObjectName(QStringLiteral("envelope_3_s"));
        envelope_3_s->setGeometry(QRect(110, 50, 20, 121));
        envelope_3_s->setMaximum(127);
        envelope_3_s->setOrientation(Qt::Vertical);
        groupBox_9 = new QGroupBox(main_widget);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 190, 351, 201));
        misc_tab_widget = new QTabWidget(groupBox_9);
        misc_tab_widget->setObjectName(QStringLiteral("misc_tab_widget"));
        misc_tab_widget->setGeometry(QRect(10, 20, 331, 171));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_15 = new QGroupBox(tab);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(200, 0, 121, 141));
        pulse_width_slider = new QSlider(groupBox_15);
        pulse_width_slider->setObjectName(QStringLiteral("pulse_width_slider"));
        pulse_width_slider->setGeometry(QRect(20, 30, 20, 101));
        pulse_width_slider->setMaximum(127);
        pulse_width_slider->setOrientation(Qt::Vertical);
        label_42 = new QLabel(groupBox_15);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(60, 80, 47, 16));
        label_43 = new QLabel(groupBox_15);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(70, 20, 47, 16));
        pulse_width_envelope_box = new QComboBox(groupBox_15);
        pulse_width_envelope_box->setObjectName(QStringLiteral("pulse_width_envelope_box"));
        pulse_width_envelope_box->setGeometry(QRect(60, 100, 51, 22));
        pulse_width_lfo_box = new QComboBox(groupBox_15);
        pulse_width_lfo_box->setObjectName(QStringLiteral("pulse_width_lfo_box"));
        pulse_width_lfo_box->setGeometry(QRect(60, 40, 51, 22));
        vibrato_group_box = new QGroupBox(tab);
        vibrato_group_box->setObjectName(QStringLiteral("vibrato_group_box"));
        vibrato_group_box->setGeometry(QRect(120, 0, 81, 71));
        vibrato_lfo_box = new QComboBox(vibrato_group_box);
        vibrato_lfo_box->setObjectName(QStringLiteral("vibrato_lfo_box"));
        vibrato_lfo_box->setGeometry(QRect(10, 40, 51, 22));
        label_40 = new QLabel(vibrato_group_box);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(20, 20, 47, 16));
        gain_group_box = new QGroupBox(tab);
        gain_group_box->setObjectName(QStringLiteral("gain_group_box"));
        gain_group_box->setGeometry(QRect(0, 0, 121, 141));
        gain_slider = new QSlider(gain_group_box);
        gain_slider->setObjectName(QStringLiteral("gain_slider"));
        gain_slider->setGeometry(QRect(20, 30, 20, 101));
        gain_slider->setMaximum(127);
        gain_slider->setOrientation(Qt::Vertical);
        label_38 = new QLabel(gain_group_box);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(60, 80, 47, 16));
        label_39 = new QLabel(gain_group_box);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(70, 20, 47, 16));
        gain_envelope_box = new QComboBox(gain_group_box);
        gain_envelope_box->setObjectName(QStringLiteral("gain_envelope_box"));
        gain_envelope_box->setGeometry(QRect(60, 100, 51, 22));
        gain_lfo_box = new QComboBox(gain_group_box);
        gain_lfo_box->setObjectName(QStringLiteral("gain_lfo_box"));
        gain_lfo_box->setGeometry(QRect(60, 40, 51, 22));
        tempo_group_box = new QGroupBox(tab);
        tempo_group_box->setObjectName(QStringLiteral("tempo_group_box"));
        tempo_group_box->setGeometry(QRect(120, 70, 81, 71));
        tempo_spin_box = new QSpinBox(tempo_group_box);
        tempo_spin_box->setObjectName(QStringLiteral("tempo_spin_box"));
        tempo_spin_box->setGeometry(QRect(20, 40, 42, 22));
        tempo_spin_box->setMaximum(1000);
        tempo_spin_box->setSingleStep(5);
        tempo_spin_box->setValue(0);
        label_36 = new QLabel(tempo_group_box);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(20, 20, 47, 13));
        misc_tab_widget->addTab(tab, QString());
        memory_tab = new QWidget();
        memory_tab->setObjectName(QStringLiteral("memory_tab"));
        memory_display_ones = new QLCDNumber(memory_tab);
        memory_display_ones->setObjectName(QStringLiteral("memory_display_ones"));
        memory_display_ones->setGeometry(QRect(50, 10, 31, 61));
        memory_display_ones->setDigitCount(1);
        memory_display_ones->setSegmentStyle(QLCDNumber::Filled);
        memory_display_tens = new QLCDNumber(memory_tab);
        memory_display_tens->setObjectName(QStringLiteral("memory_display_tens"));
        memory_display_tens->setGeometry(QRect(20, 10, 31, 61));
        memory_display_tens->setSmallDecimalPoint(false);
        memory_display_tens->setDigitCount(1);
        memory_display_tens->setSegmentStyle(QLCDNumber::Filled);
        memory_display_tens->setProperty("intValue", QVariant(0));
        widget = new QWidget(memory_tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 40, 201, 16));
        memory_set_80 = new QRadioButton(widget);
        memory_set_80->setObjectName(QStringLiteral("memory_set_80"));
        memory_set_80->setGeometry(QRect(160, 0, 16, 17));
        memory_set_70 = new QRadioButton(widget);
        memory_set_70->setObjectName(QStringLiteral("memory_set_70"));
        memory_set_70->setGeometry(QRect(140, 0, 16, 17));
        memory_set_40 = new QRadioButton(widget);
        memory_set_40->setObjectName(QStringLiteral("memory_set_40"));
        memory_set_40->setGeometry(QRect(80, 0, 16, 17));
        memory_set_00 = new QRadioButton(widget);
        memory_set_00->setObjectName(QStringLiteral("memory_set_00"));
        memory_set_00->setGeometry(QRect(0, 0, 16, 16));
        memory_set_00->setChecked(true);
        memory_set_60 = new QRadioButton(widget);
        memory_set_60->setObjectName(QStringLiteral("memory_set_60"));
        memory_set_60->setGeometry(QRect(120, 0, 16, 17));
        memory_set_30 = new QRadioButton(widget);
        memory_set_30->setObjectName(QStringLiteral("memory_set_30"));
        memory_set_30->setGeometry(QRect(60, 0, 16, 17));
        memory_set_10 = new QRadioButton(widget);
        memory_set_10->setObjectName(QStringLiteral("memory_set_10"));
        memory_set_10->setGeometry(QRect(20, 0, 16, 17));
        memory_set_50 = new QRadioButton(widget);
        memory_set_50->setObjectName(QStringLiteral("memory_set_50"));
        memory_set_50->setGeometry(QRect(100, 0, 16, 17));
        memory_set_90 = new QRadioButton(widget);
        memory_set_90->setObjectName(QStringLiteral("memory_set_90"));
        memory_set_90->setGeometry(QRect(180, 0, 16, 17));
        memory_set_20 = new QRadioButton(widget);
        memory_set_20->setObjectName(QStringLiteral("memory_set_20"));
        memory_set_20->setGeometry(QRect(40, 0, 16, 17));
        widget_2 = new QWidget(memory_tab);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(110, 20, 201, 16));
        memory_set_0 = new QRadioButton(widget_2);
        memory_set_0->setObjectName(QStringLiteral("memory_set_0"));
        memory_set_0->setGeometry(QRect(0, 0, 16, 17));
        memory_set_0->setChecked(true);
        memory_set_7 = new QRadioButton(widget_2);
        memory_set_7->setObjectName(QStringLiteral("memory_set_7"));
        memory_set_7->setGeometry(QRect(140, 0, 16, 17));
        memory_set_4 = new QRadioButton(widget_2);
        memory_set_4->setObjectName(QStringLiteral("memory_set_4"));
        memory_set_4->setGeometry(QRect(80, 0, 16, 17));
        memory_set_3 = new QRadioButton(widget_2);
        memory_set_3->setObjectName(QStringLiteral("memory_set_3"));
        memory_set_3->setGeometry(QRect(60, 0, 16, 17));
        memory_set_9 = new QRadioButton(widget_2);
        memory_set_9->setObjectName(QStringLiteral("memory_set_9"));
        memory_set_9->setGeometry(QRect(180, 0, 16, 17));
        memory_set_5 = new QRadioButton(widget_2);
        memory_set_5->setObjectName(QStringLiteral("memory_set_5"));
        memory_set_5->setGeometry(QRect(100, 0, 16, 17));
        memory_set_6 = new QRadioButton(widget_2);
        memory_set_6->setObjectName(QStringLiteral("memory_set_6"));
        memory_set_6->setGeometry(QRect(120, 0, 16, 17));
        memory_set_8 = new QRadioButton(widget_2);
        memory_set_8->setObjectName(QStringLiteral("memory_set_8"));
        memory_set_8->setGeometry(QRect(160, 0, 16, 17));
        memory_set_2 = new QRadioButton(widget_2);
        memory_set_2->setObjectName(QStringLiteral("memory_set_2"));
        memory_set_2->setGeometry(QRect(40, 0, 16, 17));
        memory_set_1 = new QRadioButton(widget_2);
        memory_set_1->setObjectName(QStringLiteral("memory_set_1"));
        memory_set_1->setGeometry(QRect(20, 0, 16, 17));
        memory_save = new QPushButton(memory_tab);
        memory_save->setObjectName(QStringLiteral("memory_save"));
        memory_save->setGeometry(QRect(10, 100, 75, 23));
        memory_load = new QPushButton(memory_tab);
        memory_load->setObjectName(QStringLiteral("memory_load"));
        memory_load->setGeometry(QRect(90, 100, 75, 23));
        misc_tab_widget->addTab(memory_tab, QString());
        controller_tab = new QWidget();
        controller_tab->setObjectName(QStringLiteral("controller_tab"));
        controller_map_box = new QComboBox(controller_tab);
        controller_map_box->setObjectName(QStringLiteral("controller_map_box"));
        controller_map_box->setGeometry(QRect(10, 20, 51, 22));
        label_41 = new QLabel(controller_tab);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(10, 0, 61, 21));
        controller_key_note = new QComboBox(controller_tab);
        controller_key_note->setObjectName(QStringLiteral("controller_key_note"));
        controller_key_note->setGeometry(QRect(100, 20, 41, 22));
        controller_key_type = new QComboBox(controller_tab);
        controller_key_type->setObjectName(QStringLiteral("controller_key_type"));
        controller_key_type->setGeometry(QRect(140, 20, 61, 22));
        label_44 = new QLabel(controller_tab);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(120, 0, 21, 21));
        label_45 = new QLabel(controller_tab);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(100, 50, 31, 16));
        controller_chord = new QComboBox(controller_tab);
        controller_chord->setObjectName(QStringLiteral("controller_chord"));
        controller_chord->setGeometry(QRect(100, 70, 31, 22));
        label_46 = new QLabel(controller_tab);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(150, 50, 47, 16));
        controller_tonic = new QComboBox(controller_tab);
        controller_tonic->setObjectName(QStringLiteral("controller_tonic"));
        controller_tonic->setGeometry(QRect(150, 70, 41, 22));
        controller_allow_send = new QCheckBox(controller_tab);
        controller_allow_send->setObjectName(QStringLiteral("controller_allow_send"));
        controller_allow_send->setGeometry(QRect(10, 100, 70, 17));
        controller_allow_receive = new QCheckBox(controller_tab);
        controller_allow_receive->setObjectName(QStringLiteral("controller_allow_receive"));
        controller_allow_receive->setGeometry(QRect(10, 120, 91, 17));
        controller_octave = new QComboBox(controller_tab);
        controller_octave->setObjectName(QStringLiteral("controller_octave"));
        controller_octave->setGeometry(QRect(220, 70, 41, 22));
        label_57 = new QLabel(controller_tab);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(220, 50, 41, 16));
        controller_send_key = new QPushButton(controller_tab);
        controller_send_key->setObjectName(QStringLiteral("controller_send_key"));
        controller_send_key->setGeometry(QRect(10, 70, 75, 23));
        misc_tab_widget->addTab(controller_tab, QString());
        flush = new QPushButton(main_widget);
        flush->setObjectName(QStringLiteral("flush"));
        flush->setGeometry(QRect(10, 610, 75, 23));
        MainWindow->setCentralWidget(main_widget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 949, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        waveform_tab_widget->setCurrentIndex(0);
        effects_tab_widget->setCurrentIndex(0);
        misc_tab_widget->setCurrentIndex(2);
        controller_octave->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        waveform_group_box->setTitle(QApplication::translate("MainWindow", "Waveform", 0));
        additive_harmonics_group_box->setTitle(QApplication::translate("MainWindow", "Harmonics", 0));
        additive_presets_group_box->setTitle(QApplication::translate("MainWindow", "Presets", 0));
        additive_presets_sawtooth->setText(QApplication::translate("MainWindow", "Sawtooth", 0));
        additive_presets_square->setText(QApplication::translate("MainWindow", "Square", 0));
        additive_presets_triangle->setText(QApplication::translate("MainWindow", "Triangle", 0));
        waveform_tab_widget->setTabText(waveform_tab_widget->indexOf(additive_tab), QApplication::translate("MainWindow", "Additive", 0));
        subtractive_harmonics_group_box->setTitle(QApplication::translate("MainWindow", "Harmonics", 0));
        waveform_tab_widget->setTabText(waveform_tab_widget->indexOf(subtractive_tab), QApplication::translate("MainWindow", "Subtractive", 0));
        mix_sawtooth_label->setText(QApplication::translate("MainWindow", "Sawtooth", 0));
        mix_pulse_label->setText(QApplication::translate("MainWindow", "Pulse", 0));
        mix_triangle_label->setText(QApplication::translate("MainWindow", "Triangle", 0));
        mix_sine_label->setText(QApplication::translate("MainWindow", "Sine", 0));
        waveform_tab_widget->setTabText(waveform_tab_widget->indexOf(mix_tab), QApplication::translate("MainWindow", "Mix", 0));
        filter_group_box->setTitle(QApplication::translate("MainWindow", "Filters", 0));
        lpf_group_box->setTitle(QApplication::translate("MainWindow", "Low-Pass", 0));
        lpf_lfo_box->clear();
        lpf_lfo_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "LFO 1", 0)
         << QApplication::translate("MainWindow", "LFO 2", 0)
         << QApplication::translate("MainWindow", "LFO 3", 0)
         << QApplication::translate("MainWindow", "LFO 4", 0)
        );
        label->setText(QApplication::translate("MainWindow", "LFO", 0));
        label_2->setText(QApplication::translate("MainWindow", "Envelope", 0));
        lpf_envelope_box->clear();
        lpf_envelope_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "Cutoff", 0));
        hpf_group_box->setTitle(QApplication::translate("MainWindow", "High-Pass", 0));
        label_4->setText(QApplication::translate("MainWindow", "LFO", 0));
        hpf_lfo_box->clear();
        hpf_lfo_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "LFO 1", 0)
         << QApplication::translate("MainWindow", "LFO 2", 0)
         << QApplication::translate("MainWindow", "LFO 3", 0)
         << QApplication::translate("MainWindow", "LFO 4", 0)
        );
        label_5->setText(QApplication::translate("MainWindow", "Envelope", 0));
        label_6->setText(QApplication::translate("MainWindow", "Cutoff", 0));
        hpf_envelope_box->clear();
        hpf_envelope_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        bpf_group_box->setTitle(QApplication::translate("MainWindow", "Band-Pass", 0));
        label_7->setText(QApplication::translate("MainWindow", "LFO", 0));
        bpf_lfo_box->clear();
        bpf_lfo_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "LFO 1", 0)
         << QApplication::translate("MainWindow", "LFO 2", 0)
         << QApplication::translate("MainWindow", "LFO 3", 0)
         << QApplication::translate("MainWindow", "LFO 4", 0)
        );
        label_8->setText(QApplication::translate("MainWindow", "Envelope", 0));
        label_9->setText(QApplication::translate("MainWindow", "Q", 0));
        bpf_envelope_box->clear();
        bpf_envelope_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        label_10->setText(QApplication::translate("MainWindow", "Center", 0));
        lfo_group_box->setTitle(QApplication::translate("MainWindow", "Low-Frequency Oscillators", 0));
        lfo_1_box->setTitle(QApplication::translate("MainWindow", "LFO 1", 0));
        label_11->setText(QApplication::translate("MainWindow", "Envelopes", 0));
        lfo_1_rate_envelope->clear();
        lfo_1_rate_envelope->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        lfo_1_depth_envelope->clear();
        lfo_1_depth_envelope->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        label_12->setText(QApplication::translate("MainWindow", "Rate", 0));
        label_13->setText(QApplication::translate("MainWindow", "Depth", 0));
        lfo_2_box->setTitle(QApplication::translate("MainWindow", "LFO 2", 0));
        lfo_2_depth_envelope->clear();
        lfo_2_depth_envelope->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        lfo_2_rate_envelope->clear();
        lfo_2_rate_envelope->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        label_14->setText(QApplication::translate("MainWindow", "Envelopes", 0));
        label_15->setText(QApplication::translate("MainWindow", "Depth", 0));
        label_16->setText(QApplication::translate("MainWindow", "Rate", 0));
        lfo_3_box->setTitle(QApplication::translate("MainWindow", "LFO 3", 0));
        lfo_3_depth_envelope->clear();
        lfo_3_depth_envelope->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        lfo_3_rate_envelope->clear();
        lfo_3_rate_envelope->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        label_17->setText(QApplication::translate("MainWindow", "Envelopes", 0));
        label_18->setText(QApplication::translate("MainWindow", "Depth", 0));
        label_19->setText(QApplication::translate("MainWindow", "Rate", 0));
        lfo_4_box->setTitle(QApplication::translate("MainWindow", "LFO 4", 0));
        lfo_4_depth_envelope->clear();
        lfo_4_depth_envelope->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        lfo_4_rate_envelope->clear();
        lfo_4_rate_envelope->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        label_20->setText(QApplication::translate("MainWindow", "Envelopes", 0));
        label_21->setText(QApplication::translate("MainWindow", "Depth", 0));
        label_22->setText(QApplication::translate("MainWindow", "Rate", 0));
        effects_group_box->setTitle(QApplication::translate("MainWindow", "Effects", 0));
        reverb_enabled->setText(QApplication::translate("MainWindow", "On", 0));
        reverb_roomsize_label->setText(QApplication::translate("MainWindow", "Roomsize", 0));
        reverb_damping_label->setText(QApplication::translate("MainWindow", "Damping", 0));
        reverb_dry_label->setText(QApplication::translate("MainWindow", "Dry", 0));
        reverb_wet_label->setText(QApplication::translate("MainWindow", "Wet", 0));
        reverb_width_label->setText(QApplication::translate("MainWindow", "Width", 0));
        effects_tab_widget->setTabText(effects_tab_widget->indexOf(reverb_tab), QApplication::translate("MainWindow", "Reverb", 0));
        delay_enabled->setText(QApplication::translate("MainWindow", "On", 0));
        delay_strength_label->setText(QApplication::translate("MainWindow", "Strength", 0));
        delay_rate_label->setText(QApplication::translate("MainWindow", "Rate", 0));
        effects_tab_widget->setTabText(effects_tab_widget->indexOf(delay_tab), QApplication::translate("MainWindow", "Delay", 0));
        arpeggiator_enabled->setText(QApplication::translate("MainWindow", "On", 0));
        arpeggiator_octaves_group_box->setTitle(QApplication::translate("MainWindow", "Octaves", 0));
        arpeggiator_octaves_4->setText(QApplication::translate("MainWindow", "4", 0));
        arpeggiator_octaves_1->setText(QApplication::translate("MainWindow", "1", 0));
        arpeggiator_octaves_3->setText(QApplication::translate("MainWindow", "3", 0));
        arpeggiator_octaves_2->setText(QApplication::translate("MainWindow", "2", 0));
        arpeggiator_direction_group_box->setTitle(QApplication::translate("MainWindow", "Direction", 0));
        arpeggiator_direction_up->setText(QApplication::translate("MainWindow", "Up", 0));
        arpeggiator_direction_random->setText(QApplication::translate("MainWindow", "Random", 0));
        arpeggiator_direction_down->setText(QApplication::translate("MainWindow", "Down", 0));
        arpeggiator_priority_group_box->setTitle(QApplication::translate("MainWindow", "Priority", 0));
        arpeggiator_priority_up->setText(QApplication::translate("MainWindow", "Up", 0));
        arpeggiator_priority_down->setText(QApplication::translate("MainWindow", "Down", 0));
        arpeggiator_rate_group_box->setTitle(QApplication::translate("MainWindow", "Rate", 0));
        arpeggiator_rate_x3->setText(QApplication::translate("MainWindow", "BPM x 3", 0));
        arpeggiator_rate_x2->setText(QApplication::translate("MainWindow", "BPM x 2", 0));
        arpeggiator_rate_x1->setText(QApplication::translate("MainWindow", "BPM x 1", 0));
        arpeggiator_rate_x4->setText(QApplication::translate("MainWindow", "BPM x 4", 0));
        arpeggiator_phase->setText(QApplication::translate("MainWindow", "Phase Reset", 0));
        effects_tab_widget->setTabText(effects_tab_widget->indexOf(arpeggiator_tab), QApplication::translate("MainWindow", "Arpeggiator", 0));
        label_37->setText(QApplication::translate("MainWindow", "Gain", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Octaves", 0));
        suboscillator_octave_1->setText(QApplication::translate("MainWindow", "1", 0));
        suboscillator_octave_2->setText(QApplication::translate("MainWindow", "2", 0));
        effects_tab_widget->setTabText(effects_tab_widget->indexOf(suboscillator_tab), QApplication::translate("MainWindow", "Subosc.", 0));
        label_35->setText(QApplication::translate("MainWindow", "Time", 0));
        effects_tab_widget->setTabText(effects_tab_widget->indexOf(portamento_tab), QApplication::translate("MainWindow", "Port.", 0));
        envelope_group_box->setTitle(QApplication::translate("MainWindow", "Envelopes", 0));
        envelope_1_group_box->setTitle(QApplication::translate("MainWindow", "Env 1", 0));
        label_23->setText(QApplication::translate("MainWindow", "A", 0));
        label_24->setText(QApplication::translate("MainWindow", "D", 0));
        label_25->setText(QApplication::translate("MainWindow", "S", 0));
        label_26->setText(QApplication::translate("MainWindow", "R", 0));
        envelope_2_group_box->setTitle(QApplication::translate("MainWindow", "Env 2", 0));
        label_27->setText(QApplication::translate("MainWindow", "A", 0));
        label_28->setText(QApplication::translate("MainWindow", "S", 0));
        label_29->setText(QApplication::translate("MainWindow", "R", 0));
        label_30->setText(QApplication::translate("MainWindow", "D", 0));
        envelope_3_group_box->setTitle(QApplication::translate("MainWindow", "Env 3", 0));
        label_31->setText(QApplication::translate("MainWindow", "A", 0));
        label_32->setText(QApplication::translate("MainWindow", "S", 0));
        label_33->setText(QApplication::translate("MainWindow", "R", 0));
        label_34->setText(QApplication::translate("MainWindow", "D", 0));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Settings", 0));
        groupBox_15->setTitle(QApplication::translate("MainWindow", "Pulse Wdith", 0));
        label_42->setText(QApplication::translate("MainWindow", "Envelope", 0));
        label_43->setText(QApplication::translate("MainWindow", "LFO", 0));
        pulse_width_envelope_box->clear();
        pulse_width_envelope_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        pulse_width_lfo_box->clear();
        pulse_width_lfo_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "LFO 1", 0)
         << QApplication::translate("MainWindow", "LFO 2", 0)
         << QApplication::translate("MainWindow", "LFO 3", 0)
         << QApplication::translate("MainWindow", "LFO 4", 0)
        );
        vibrato_group_box->setTitle(QApplication::translate("MainWindow", "Vibrato", 0));
        vibrato_lfo_box->clear();
        vibrato_lfo_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "LFO 1", 0)
         << QApplication::translate("MainWindow", "LFO 2", 0)
         << QApplication::translate("MainWindow", "LFO 3", 0)
         << QApplication::translate("MainWindow", "LFO 4", 0)
        );
        label_40->setText(QApplication::translate("MainWindow", "LFO", 0));
        gain_group_box->setTitle(QApplication::translate("MainWindow", "Gain", 0));
        label_38->setText(QApplication::translate("MainWindow", "Envelope", 0));
        label_39->setText(QApplication::translate("MainWindow", "LFO", 0));
        gain_envelope_box->clear();
        gain_envelope_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Env 1", 0)
         << QApplication::translate("MainWindow", "Env 2", 0)
         << QApplication::translate("MainWindow", "Env 3", 0)
         << QApplication::translate("MainWindow", "Env 4", 0)
        );
        gain_lfo_box->clear();
        gain_lfo_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "LFO 1", 0)
         << QApplication::translate("MainWindow", "LFO 2", 0)
         << QApplication::translate("MainWindow", "LFO 3", 0)
         << QApplication::translate("MainWindow", "LFO 4", 0)
        );
        tempo_group_box->setTitle(QApplication::translate("MainWindow", "Tempo", 0));
        label_36->setText(QApplication::translate("MainWindow", "BPM", 0));
        misc_tab_widget->setTabText(misc_tab_widget->indexOf(tab), QApplication::translate("MainWindow", "Primary", 0));
        memory_set_80->setText(QString());
        memory_set_70->setText(QString());
        memory_set_40->setText(QString());
        memory_set_00->setText(QString());
        memory_set_60->setText(QString());
        memory_set_30->setText(QString());
        memory_set_10->setText(QString());
        memory_set_50->setText(QString());
        memory_set_90->setText(QString());
        memory_set_20->setText(QString());
        memory_set_0->setText(QString());
        memory_set_7->setText(QString());
        memory_set_4->setText(QString());
        memory_set_3->setText(QString());
        memory_set_9->setText(QString());
        memory_set_5->setText(QString());
        memory_set_6->setText(QString());
        memory_set_8->setText(QString());
        memory_set_2->setText(QString());
        memory_set_1->setText(QString());
        memory_save->setText(QApplication::translate("MainWindow", "Save", 0));
        memory_load->setText(QApplication::translate("MainWindow", "Load", 0));
        misc_tab_widget->setTabText(misc_tab_widget->indexOf(memory_tab), QApplication::translate("MainWindow", "Memory", 0));
        controller_map_box->clear();
        controller_map_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "---", 0)
         << QApplication::translate("MainWindow", "PS2", 0)
         << QApplication::translate("MainWindow", "Slider", 0)
         << QApplication::translate("MainWindow", "Golf", 0)
         << QApplication::translate("MainWindow", "Guitar", 0)
         << QApplication::translate("MainWindow", "Drum", 0)
        );
        label_41->setText(QApplication::translate("MainWindow", "Button Map", 0));
        controller_key_note->clear();
        controller_key_note->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "C", 0)
         << QApplication::translate("MainWindow", "C#", 0)
         << QApplication::translate("MainWindow", "D", 0)
         << QApplication::translate("MainWindow", "D#", 0)
         << QApplication::translate("MainWindow", "E", 0)
         << QApplication::translate("MainWindow", "F", 0)
         << QApplication::translate("MainWindow", "F#", 0)
         << QApplication::translate("MainWindow", "G", 0)
         << QApplication::translate("MainWindow", "G#", 0)
         << QApplication::translate("MainWindow", "A", 0)
         << QApplication::translate("MainWindow", "A#", 0)
         << QApplication::translate("MainWindow", "B", 0)
        );
        controller_key_type->clear();
        controller_key_type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Major", 0)
         << QApplication::translate("MainWindow", "Minor", 0)
        );
        label_44->setText(QApplication::translate("MainWindow", "Key", 0));
        label_45->setText(QApplication::translate("MainWindow", "Chord", 0));
        controller_chord->clear();
        controller_chord->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
        );
        label_46->setText(QApplication::translate("MainWindow", "Tonic", 0));
        controller_tonic->clear();
        controller_tonic->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "C", 0)
         << QApplication::translate("MainWindow", "C#", 0)
         << QApplication::translate("MainWindow", "D", 0)
         << QApplication::translate("MainWindow", "D#", 0)
         << QApplication::translate("MainWindow", "E", 0)
         << QApplication::translate("MainWindow", "F", 0)
         << QApplication::translate("MainWindow", "F#", 0)
         << QApplication::translate("MainWindow", "G", 0)
         << QApplication::translate("MainWindow", "G#", 0)
         << QApplication::translate("MainWindow", "A", 0)
         << QApplication::translate("MainWindow", "A#", 0)
         << QApplication::translate("MainWindow", "B", 0)
        );
        controller_allow_send->setText(QApplication::translate("MainWindow", "Allow Send", 0));
        controller_allow_receive->setText(QApplication::translate("MainWindow", "Allow Receive", 0));
        controller_octave->clear();
        controller_octave->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "-3", 0)
         << QApplication::translate("MainWindow", "-2", 0)
         << QApplication::translate("MainWindow", "-1", 0)
         << QApplication::translate("MainWindow", "0", 0)
         << QApplication::translate("MainWindow", "+1", 0)
         << QApplication::translate("MainWindow", "+2", 0)
         << QApplication::translate("MainWindow", "+3", 0)
        );
        label_57->setText(QApplication::translate("MainWindow", "Octave", 0));
        controller_send_key->setText(QApplication::translate("MainWindow", "Send Key", 0));
        misc_tab_widget->setTabText(misc_tab_widget->indexOf(controller_tab), QApplication::translate("MainWindow", "Controller", 0));
        flush->setText(QApplication::translate("MainWindow", "Flush", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
