cmake_minimum_required(VERSION 3.24)
project(Poliformismo_orientado_a_objetos)

set(CMAKE_CXX_STANDARD 17)

add_executable(Poliformismo_orientado_a_objetos
        main.cpp
        Mago.cpp
        Mago.h
        Personaje.cpp
        Personaje.h
        Orco.h
        Orco.cpp
        inventario.cpp
        inventario.h
        Guerrero.cpp
        Guerrero.h
        Goblin.h
        Goblin.cpp
        Enemigo.h
        Enemigo.cpp
        Entidad.h Entidad.cpp Habilidades.h Habilidades.cpp BolaDeFuego.cpp BolaDeFuego.h Curar.cpp Curar.h ConfiguracionesJuego.cpp ConfiguracionesJuego.h
        Item.cpp
        Item.h
        Item.h
        Pocion.cpp
        Pocion.h
        Pocion.h
        Arma.cpp
        Arma.h
        Arma.h
        NewInventario.cpp
        NewInventario.h)
