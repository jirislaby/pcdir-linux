TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CFLAGS_WARN_ON -= -W
QMAKE_CFLAGS += -std=gnu99

#QMAKE_LIBS=-lefence
SOURCES += memcheck.c
