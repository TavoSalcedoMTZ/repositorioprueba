//
// Created by Alumnos on 18/06/2024.
//

#include "ConfiguracionesJuego.h"

ConfiguracionesJuego::ConfiguracionesJuego() {}
ConfiguracionesJuego::~ConfiguracionesJuego() {}

void ConfiguracionesJuego::SetResolucion(int Resolucion) {
    std::cout<<"Resolucion Establecida"<<std::endl;
}

int ConfiguracionesJuego::GetResolucion() {
    return Resolucion;
}

void ConfiguracionesJuego::SetVolumen(int Volumen) {
    std::cout<<"Volumen Establecido"<<std::endl;
}

int ConfiguracionesJuego::GetVolumen() {
    return Volumen;
}

void ConfiguracionesJuego::SetDificultad(std::string Dificultad) {
    std::cout<<"Dificultad Establecida"<<std::endl;
}

std::string ConfiguracionesJuego::GetDificultad() {
    return Dificultad;
}