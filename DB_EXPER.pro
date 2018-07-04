#-------------------------------------------------
#
# Project created by QtCreator 2018-06-28T08:39:26
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DB_EXPER
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    student.cpp \
    teacher.cpp \
    s_1.cpp \
    s_2.cpp \
    s_3.cpp \
    s_4.cpp \
    s_5.cpp \
    t_1.cpp \
    t_2.cpp \
    t_3.cpp \
    t_4.cpp \
    t_5.cpp \
    t_6.cpp \
    t_7.cpp

HEADERS  += mainwindow.h \
    student.h \
    teacher.h \
    s_1.h \
    s_2.h \
    s_3.h \
    s_4.h \
    s_5.h \
    t_1.h \
    t_2.h \
    t_3.h \
    t_4.h \
    t_5.h \
    t_6.h \
    t_7.h

FORMS    += mainwindow.ui \
    student.ui \
    teacher.ui \
    s_1.ui \
    s_2.ui \
    s_3.ui \
    s_4.ui \
    s_5.ui \
    t_1.ui \
    t_2.ui \
    t_3.ui \
    t_4.ui \
    t_5.ui \
    t_6.ui \
    t_7.ui
