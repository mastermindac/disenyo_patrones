TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Builder/constructorlaberinto.cpp \
        Builder/constructorlaberintoestandar.cpp \
        Builder/juegodellaberintobuilder.cpp \
        FactoryA/fabricadelaberintos.cpp \
        FactoryA/fabricadelaberintosencantados.cpp \
        FactoryA/habitacionencantada.cpp \
        FactoryA/juegodellaberintofactorya.cpp \
        FactoryM/creadorlaberinto.cpp \
        FactoryM/creadorlaberintoconbombas.cpp \
        FactoryM/juegodellaberintofactorym.cpp \
        Laberinto/habitacion.cpp \
        Laberinto/juegodellaberinto.cpp \
        Laberinto/laberinto.cpp \
        Laberinto/lugardelmapa.cpp \
        Laberinto/pared.cpp \
        Laberinto/puerta.cpp \
        SingleTon/fabricadelaberintosst.cpp \
        main.cpp
HEADERS += \
        Builder/constructorlaberinto.h \
        Builder/constructorlaberintoestandar.h \
        Builder/juegodellaberintobuilder.h \
        FactoryA/fabricadelaberintos.h \
        FactoryA/fabricadelaberintosencantados.h \
        FactoryA/habitacionencantada.h \
        FactoryA/juegodellaberintofactorya.h \
        FactoryM/creadorlaberinto.h \
        FactoryM/creadorlaberintoconbombas.h \
        FactoryM/juegodellaberintofactorym.h \
        Laberinto/habitacion.h \
        Laberinto/juegodellaberinto.h \
        Laberinto/laberinto.h \
        Laberinto/lugardelmapa.h \
        Laberinto/pared.h \
        Laberinto/puerta.h \
        SingleTon/fabricadelaberintosst.h
