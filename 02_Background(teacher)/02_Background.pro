QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 01_qt_custom_widget
TEMPLATE = app


SOURCES += main.cpp \
    widget.cpp

HEADERS  += \
    widget.h

RESOURCES += \
    resources.qrc
