QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = tictactoe
TEMPLATE = app
SOURCES += main.cpp tictactoewidget.cpp \
    configurationdialog.cpp \
    mainwindow.cpp
HEADERS  += tictactoewidget.h \
    configurationdialog.h \
    mainwindow.h

FORMS += \
    configurationdialog.ui \
    mainwindow.ui

RESOURCES += \
    resources.qrc
