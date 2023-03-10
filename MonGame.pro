TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        battle.cpp \
        inventory.cpp \
        item.cpp \
        main.cpp \
        market.cpp \
        monster.cpp \
        myteam.cpp \
        player.cpp

HEADERS += \
    battle.h \
    inventory.h \
    item.h \
    market.h \
    monster.h \
    myteam.h \
    player.h
