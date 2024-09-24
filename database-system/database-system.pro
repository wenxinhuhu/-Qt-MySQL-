#-------------------------------------------------
#
# Project created by QtCreator 2024-05-19T18:23:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = database-system
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


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    regi.cpp \
    signin.cpp \
    database.cpp \
    regi_doc.cpp \
    signin_doc.cpp \
    appoint.cpp \
    pay.cpp \
    record.cpp \
    addrec.cpp \
    details.cpp \
    deleteapp.cpp

HEADERS += \
        mainwindow.h \
    regi.h \
    signin.h \
    database.h \
    regi_doc.h \
    signin_doc.h \
    appoint.h \
    pay.h \
    record.h \
    addrec.h \
    details.h \
    deleteapp.h

FORMS += \
        mainwindow.ui \
    regi.ui \
    signin.ui \
    regi_doc.ui \
    signin_doc.ui \
    appoint.ui \
    pay.ui \
    record.ui \
    addrec.ui \
    details.ui \
    deleteapp.ui

QT +=sql

RESOURCES += \
    resource.qrc

DISTFILES +=

