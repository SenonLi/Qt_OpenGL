#-------------------------------------------------
#
# Project created by QtCreator 2016-09-09T11:39:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TeapotExplosion
TEMPLATE = app

LIBS    += -lopengl32

SOURCES += main.cpp\
        SenTeapotObservationWidget.cpp \
    SenTeapotExplodeGLWidget.cpp \
    SenAbstractGLWidget.cpp

HEADERS  += SenTeapotObservationWidget.h \
    SenTeapotExplodeGLWidget.h \
    SenAbstractGLWidget.h \
    teapot.h
