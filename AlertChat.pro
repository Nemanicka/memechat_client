#-------------------------------------------------
#
# Project created by QtCreator 2015-07-08T22:25:03
#
#-------------------------------------------------

QT       += core gui
QT       += Network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AlertChat
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    client.cpp

HEADERS  += mainwindow.h \
    client.h

FORMS    += mainwindow.ui
