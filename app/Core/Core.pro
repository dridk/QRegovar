#-------------------------------------------------
#
# Project created by QtCreator 2017-04-03T12:33:11
#
#-------------------------------------------------

QT       += network


TARGET = Core
TEMPLATE = lib
CONFIG += staticlib

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

include(model/model.pri)
include(managers/managers.pri)
include(tools/tools.pri)


SOURCES += core.cpp
HEADERS += core.h




unix {
    target.path = /usr/lib
    INSTALLS += target
}
