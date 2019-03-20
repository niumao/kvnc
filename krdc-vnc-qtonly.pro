TEMPLATE = app
TARGET = krdc-vnc-qtonly
DEPENDPATH += .
INCLUDEPATH += .
LIBS += -lvncclient -lgnutls
DEFINES += QTONLY

QT += core gui widgets

HEADERS += remoteview.h vncclientthread.h vncview.h \
    rfb/default8x16.h \
    rfb/keysym.h \
    rfb/rfb.h \
    rfb/rfbclient.h \
    rfb/rfbconfig.h.cmakein \
    rfb/rfbproto.h \
    rfb/rfbregion.h
SOURCES += main.cpp remoteview.cpp vncclientthread.cpp vncview.cpp
