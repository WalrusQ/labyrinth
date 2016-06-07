#-------------------------------------------------
#
# Project created by QtCreator 2016-06-07T18:48:21
#
#-------------------------------------------------

QT       -= core gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += lib.cpp

HEADERS += lib.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
