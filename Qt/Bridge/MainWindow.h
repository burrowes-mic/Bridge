#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "lo/lo.h"
#include <QMainWindow>
#include <QVector>
#include <QProcess>

class SenderGroup;
class QButtonGroup;

#define OSC_RECEIVE_PORT "6450"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QProcess* pure_data, lo_server_thread* thread, QWidget *parent = 0);
    ~MainWindow();

    void ControllerInputReceived(QString path, int sender, int value);

public slots:
    bool ReadPatch(bool init = false);
    bool SavePatch();
    void LoadControllerMap(int index);
    void Flush();
    void SendKey();

private:
    Ui::MainWindow *ui;

    QVector<SenderGroup*> mSenderGroups;
    QVector<QButtonGroup*> mButtonGroups;
    QVector<int> mPatchConstants;

    lo_server_thread* mOSCReceiver;

    QProcess* mPureData;
    QProcess* mControllerReader;
    bool mControllerReaderActive;

    lo_address mSendAddress;

    bool Init();
};

#endif // MAINWINDOW_H
