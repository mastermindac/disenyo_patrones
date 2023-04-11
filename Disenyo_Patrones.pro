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
        PatronesEstructurales/Adaptador/forma.cpp \
        PatronesEstructurales/Adaptador/formatexto.cpp \
        PatronesEstructurales/Adaptador/manipulador.cpp \
        PatronesEstructurales/Adaptador/vistatexto.cpp \
        PatronesEstructurales/Compuesto/componentecompuesto.cpp \
        PatronesEstructurales/Compuesto/componentevisualc.cpp \
        PatronesEstructurales/Compuesto/punto.cpp \
        PatronesEstructurales/Decorador/componentetexto.cpp \
        PatronesEstructurales/Decorador/componentevisual.cpp \
        PatronesEstructurales/Decorador/decorador.cpp \
        PatronesEstructurales/Decorador/decoradorborde.cpp \
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
        PatronesEstructurales/Adaptador/forma.h \
        PatronesEstructurales/Adaptador/formatexto.h \
        PatronesEstructurales/Adaptador/manipulador.h \
        PatronesEstructurales/Adaptador/vistatexto.h \
        PatronesEstructurales/Compuesto/componentecompuesto.h \
        PatronesEstructurales/Compuesto/componentevisualc.h \
        PatronesEstructurales/Compuesto/punto.h \
        PatronesEstructurales/Decorador/componentetexto.h \
        PatronesEstructurales/Decorador/componentevisual.h \
        PatronesEstructurales/Decorador/decorador.h \
        PatronesEstructurales/Decorador/decoradorborde.h

