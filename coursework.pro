TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Board.cpp \
        Game.cpp \
        Menu.cpp \
        Palette.cpp \
        Pearson.cpp \
        Screen.cpp \
        main.cpp

LIBS += -lncurses


INCLUDEPATH += $$PWD/../PDCurses
DEPENDPATH += $$PWD/../PDCurses

HEADERS += \
    Board.h \
    Game.h \
    GameState.h \
    Menu.h \
    Pearson.h \
    Screen.h \
    palette.h

