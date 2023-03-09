TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        battle.cpp \
        enemymonster.cpp \
        inventory.cpp \
        item.cpp \
        main.cpp \
        market.cpp \
        monster.cpp \
        mymonster.cpp \
        myteam.cpp \
        player.cpp

HEADERS += \
    battle.h \
    enemymonster.h \
    inventory.h \
    item.h \
    market.h \
    monster.h \
    mymonster.h \
    myteam.h \
    player.h
