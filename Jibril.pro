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

<<<<<<< HEAD
win32 {

    CONFIG(debug, debug|release) {
        DESTDIR = Bin/Windows/Debug
        OBJECTS_DIR = Bin/Windows/Debug/.obj
        MOC_DIR = Bin/Windows/Debug/.moc
        RCC_DIR = Bin/Windows/Debug/.rcc
        UI_DIR = Bin/Windows/Debug/.ui
    }
    else {
        DESTDIR = Bin/Windows/Release
        OBJECTS_DIR = Bin/Windows/Release/.obj
        MOC_DIR = Bin/Windows/Release/.moc
        RCC_DIR = Bin/Windows/Release/.rcc
        UI_DIR = Bin/Windows/Release/.ui
    }
}

macx {

    CONFIG(debug, debug|release) {
        DESTDIR = Bin/MacOSX/Debug
        OBJECTS_DIR = Bin/MacOSX/Debug/.obj
        MOC_DIR = Bin/MacOSX/Debug/.moc
        RCC_DIR = Bin/MacOSX/Debug/.rcc
        UI_DIR = Bin/MacOSX/Debug/.ui
    }
    else {
        DESTDIR = Bin/MacOSX/Release
        OBJECTS_DIR = Bin/MacOSX/Release/.obj
        MOC_DIR = Bin/MacOSX/Release/.moc
        RCC_DIR = Bin/MacOSX/Release/.rcc
        UI_DIR = Bin/MacOSX/Release/.ui
    }
}

unix:!macx {

    CONFIG(debug, debug|release) {
        DESTDIR = Bin/Linux/Debug
        OBJECTS_DIR = Bin/Linux/Debug/.obj
        MOC_DIR = Bin/Linux/Debug/.moc
        RCC_DIR = Bin/Linux/Debug/.rcc
        UI_DIR = Bin/Linux/Debug/.ui
    }
    else {
        DESTDIR = Bin/Linux/Release
        OBJECTS_DIR = Bin/Linux/Release/.obj
        MOC_DIR = Bin/Linux/Release/.moc
        RCC_DIR = Bin/Linux/Release/.rcc
        UI_DIR = Bin/Linux/Release/.ui
    }
}

OTHER_FILES +=
=======
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
>>>>>>> 16889d6fcba4cee975624581277276a4d4434e4b
