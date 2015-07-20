#-------------------------------------------------
#
# Project created by QtCreator 2014-11-03T18:13:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VectoresCPlus
TEMPLATE = app
CONFIG += static
CONFIG += staticlib

SOURCES += main.cpp\
        mainwindow.cpp \
    Geometry/vector2d.cpp \
    Geometry/point.cpp \
    Geometry/direction.cpp

HEADERS  += mainwindow.h \
    Geometry/vector2d.h \
    Geometry/point.h \
    Geometry/direction.h

FORMS    += mainwindow.ui
