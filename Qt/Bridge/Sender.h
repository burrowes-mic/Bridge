#ifndef SENDER_H
#define SENDER_H

#include <QtWidgets>
#include <QObject>

/*******************
 * PARENT SENDER
 ******************/

class Sender : public QObject
{
    Q_OBJECT

public:
    Sender(int send_value);
    void Init(int init_value);
    virtual void PushValue(int value, bool send) = 0;
    virtual int GetValue() = 0;

signals:
    void Changed(int value);

private slots:
    void Change(int value) {emit Changed(value);}

protected:
    int mSendValue;
};

/*******************
 * SLIDER SENDER
 ******************/

class SliderSender : public Sender
{
public:
    SliderSender(QSlider* slider, int send_value);

    void PushValue(int value, bool send);
    int GetValue();

private:
    QSlider* mSlider;
};

/*******************
 * CHECKBOX SENDER
 ******************/

class CheckBoxSender : public Sender
{
public:
    CheckBoxSender(QCheckBox* check_box, int send_value);

    void PushValue(int value, bool send);
    int GetValue();

private:
    QCheckBox* mCheckBox;
};

/*******************
 * BUTTON GROUP SENDER
 ******************/

class ButtonGroupSender : public Sender
{
public:
    ButtonGroupSender(QButtonGroup* slider, int send_value);

    void PushValue(int value, bool send);
    int GetValue();

private:
    QButtonGroup* mButtonGroup;
};

/*******************
 * TAB WIDGET SENDER
 ******************/

class TabWidgetSender : public Sender
{
public:
    TabWidgetSender(QTabWidget* tab_widget, int send_value);

    void PushValue(int value, bool send);
    int GetValue();

private:
    QTabWidget* mTabWidget;
};

/*******************
 * COMBO BOX SENDER
 ******************/

class ComboBoxSender : public Sender
{
public:
    ComboBoxSender(QComboBox* combo_box, int send_value);

    void PushValue(int value, bool send);
    int GetValue();

private:
    QComboBox* mComboBox;
};

/*******************
 * SPIN BOX SENDER
 ******************/

class SpinBoxSender : public Sender
{
public:
    SpinBoxSender(QSpinBox* spin_box, int send_value);

    void PushValue(int value, bool send);
    int GetValue();

private:
    QSpinBox* mSpinBox;
};

#endif // SENDER_H
