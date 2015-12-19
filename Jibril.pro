#-------------------------------------------------
#
# Project created by QtCreator 2015-12-16T18:25:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Jibril
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
        Versioning.cpp

HEADERS  += MainWindow.h \
        Versioning.h

CONFIG(debug, debug|release) {
    DESTDIR = Bin/Debug
    OBJECTS_DIR = Bin/Debug/.obj
    MOC_DIR = Bin/Debug/.moc
    RCC_DIR = Bin/Debug/.rcc
    UI_DIR = Bin/Debug/.ui
} else {
    DESTDIR = Bin/Release
    OBJECTS_DIR = Bin/Release/.obj
    MOC_DIR = Bin/Release/.moc
    RCC_DIR = Bin/Release/.rcc
    UI_DIR = Bin/Release/.ui
}
