#-------------------------------------------------
#
# Project created by QtCreator 2015-07-08T22:25:03
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AlertChat
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        client.cpp \
        login.cpp \
        server.cpp \
        memetextedit.cpp

HEADERS  += mainwindow.h \
            client.h \
            login.h \
            server.h \
            memetextedit.h

FORMS    += mainwindow.ui \
    login.ui
