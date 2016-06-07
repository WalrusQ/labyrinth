#-------------------------------------------------
#
# Project created by QtCreator 2016-05-17T15:11:17
#
#-------------------------------------------------

QT       -= core gui

TARGET = Lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += lib.cpp

HEADERS += lib.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
