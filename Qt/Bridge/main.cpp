#include "MainWindow.h"
#include <QApplication>
#include <QSplashScreen>
//#include <QErrorMessage>
#include <QTime>
#include "lo/lo.h"

#define TIMEOUT 30000

int InitReception(const char* path, const char* types, lo_arg** argv, int argc, void* data, void* user_data)
{
    *((bool*)(user_data)) = true;

    return 1;
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPixmap image(":/resources/splash.png");
    QSplashScreen splash(image);
    splash.show();

    app.processEvents();
    QProcess* pure_data = new QProcess;
    QString path = "PureData\\Program\\bin\\pd.com";
    QStringList args;
    //args << "-nogui";
    args << "open" << "PureData\\Patches\\Gate.pd";
    pure_data->start(path, args);

    bool proceed = false;
    lo_server_thread* thread = new lo_server_thread;
    *thread = lo_server_thread_new(OSC_RECEIVE_PORT, nullptr);
    lo_server_thread_add_method(*thread, "/initpd", "i", InitReception, &proceed);
    lo_server_thread_start(*thread);

    QTime time = QTime::currentTime();
    while(!proceed)
    {
        if(QTime::currentTime().msecsTo(time) < -TIMEOUT)
            return -1;
    }

    MainWindow window(pure_data, thread);
    window.show();
    splash.close();
    app.setActiveWindow(&window);

    return app.exec();
}
