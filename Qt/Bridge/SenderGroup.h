#ifndef INPUTSEGMENT_H
#define INPUTSEGMENT_H

#include "lo/lo.h"
#include <QtWidgets>
#include <QObject>

class Sender;

#define OSC_SEND_PORT "6449"

class SenderGroup : public QObject
{
    Q_OBJECT

public:
    SenderGroup(QString osc_route, lo_address& address);
    ~SenderGroup();

    void AddSenderWidget(QSlider* slider, int send_value, int init = -1);
    void AddSenderWidget(QCheckBox* check_box, int send_value, int init = -1);
    void AddSenderWidget(QButtonGroup* button_group, int send_value, int init = -1);
    void AddSenderWidget(QTabWidget* tab_widget, int send_value, int init = -1);
    void AddSenderWidget(QComboBox* combo_box, int send_value, int init = -1);
    void AddSenderWidget(QSpinBox* spin_box, int send_value, int init = -1);

    bool PushValue(int index, int value, bool send = true);
    QVector<int> GetValues();
    bool RouteMatch(QString route);

    int GetSenderCount();

private slots:
    void Send(int value);
    void SetSender(int send_value) {mSender = send_value;}

private:
    QString mOSCRoute;
    lo_address& mAddress;
    int mSender;
    QSignalMapper* mMapper;
    QVector<Sender*> mSenders;
};

#endif
