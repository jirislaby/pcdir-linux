TEMPLATE = lib
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CFLAGS_WARN_ON -= -W

TARGET = mylib
SOURCES += mylib.c
HEADERS += mylib.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
