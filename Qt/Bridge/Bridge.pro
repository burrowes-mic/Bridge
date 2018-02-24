#-------------------------------------------------
#
# Project created by QtCreator 2015-12-06T10:20:26
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bridge
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    Sender.cpp \
    SenderGroup.cpp

HEADERS  += MainWindow.h \
    SenderGroup.h \
    Sender.h

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../ThirdParty/liblo-0.28/lib/ReleaseDLL/ -lliblo
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../ThirdParty/liblo-0.28/lib/DebugDLL/ -lliblo_d

INCLUDEPATH += $$PWD/../../../ThirdParty/liblo-0.28
DEPENDPATH += $$PWD/../../../ThirdParty/liblo-0.28

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../ThirdParty/liblo-0.28/lib/ReleaseDLL/libliblo.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../ThirdParty/liblo-0.28/lib/DebugDLL/libliblo_d.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../ThirdParty/liblo-0.28/lib/ReleaseDLL/liblo.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../ThirdParty/liblo-0.28/lib/DebugDLL/liblo_d.lib

FORMS    += MainWindow.ui

RESOURCES += \
    resources.qrc
