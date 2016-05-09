TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CFLAGS_WARN_ON -= -W
QMAKE_CFLAGS += -std=gnu99

SOURCES += main.c

exists(main-local.pri) {
	include(main-local.pri)
}
