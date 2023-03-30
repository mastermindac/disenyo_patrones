TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        PatronesCreacion/Builder/constructorlaberinto.cpp \
        PatronesCreacion/Builder/constructorlaberintoestandar.cpp \
        PatronesCreacion/Builder/juegodellaberintobuilder.cpp \
        PatronesCreacion/FactoryA/fabricadelaberintos.cpp \
        PatronesCreacion/FactoryA/fabricadelaberintosencantados.cpp \
        PatronesCreacion/FactoryA/habitacionencantada.cpp \
        PatronesCreacion/FactoryA/juegodellaberintofactorya.cpp \
        PatronesCreacion/FactoryM/creadorlaberinto.cpp \
        PatronesCreacion/FactoryM/creadorlaberintoconbombas.cpp \
        PatronesCreacion/FactoryM/juegodellaberintofactorym.cpp \
        PatronesCreacion/Laberinto/habitacion.cpp \
        PatronesCreacion/Laberinto/juegodellaberinto.cpp \
        PatronesCreacion/Laberinto/laberinto.cpp \
        PatronesCreacion/Laberinto/lugardelmapa.cpp \
        PatronesCreacion/Laberinto/pared.cpp \
        PatronesCreacion/Laberinto/puerta.cpp \
        PatronesCreacion/SingleTon/fabricadelaberintosst.cpp \
        main.cpp
HEADERS += \
        PatronesCreacion/Builder/constructorlaberinto.h \
        PatronesCreacion/Builder/constructorlaberintoestandar.h \
        PatronesCreacion/Builder/juegodellaberintobuilder.h \
        PatronesCreacion/FactoryA/fabricadelaberintos.h \
        PatronesCreacion/FactoryA/fabricadelaberintosencantados.h \
        PatronesCreacion/FactoryA/habitacionencantada.h \
        PatronesCreacion/FactoryA/juegodellaberintofactorya.h \
        PatronesCreacion/FactoryM/creadorlaberinto.h \
        PatronesCreacion/FactoryM/creadorlaberintoconbombas.h \
        PatronesCreacion/FactoryM/juegodellaberintofactorym.h \
        PatronesCreacion/Laberinto/habitacion.h \
        PatronesCreacion/Laberinto/juegodellaberinto.h \
        PatronesCreacion/Laberinto/laberinto.h \
        PatronesCreacion/Laberinto/lugardelmapa.h \
        PatronesCreacion/Laberinto/pared.h \
        PatronesCreacion/Laberinto/puerta.h \
        PatronesCreacion/SingleTon/fabricadelaberintosst.h
