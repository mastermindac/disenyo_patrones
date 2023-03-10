TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        AbstractFactory/fabricadelaberintos.cpp \
        Laberinto/habitacion.cpp \
        Laberinto/juegodellaberinto.cpp \
        Laberinto/laberinto.cpp \
        Laberinto/lugardelmapa.cpp \
        Laberinto/pared.cpp \
        Laberinto/puerta.cpp \
        main.cpp

HEADERS += \
    AbstractFactory/fabricadelaberintos.h \
    Laberinto/habitacion.h \
    Laberinto/juegodellaberinto.h \
    Laberinto/laberinto.h \
    Laberinto/lugardelmapa.h \
    Laberinto/pared.h \
    Laberinto/puerta.h
