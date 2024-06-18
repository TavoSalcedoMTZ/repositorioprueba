//
// Created by Alumnos on 11/06/2024.
//

#include "Mago.h"

Mago::Mago() {
    this->tipodemagia=tipodemagia;
    this->cantidaddemana=cantidaddemana;
}
Mago::Mago(float Vida, float Escudo, float Velocidad, float Dano, std::string tipodemagia, float cantidaddemana) {
    this->tipodemagia=tipodemagia;
    this->cantidaddemana=cantidaddemana;
}

Mago::~Mago() {
    std::cout<<"El mago fue destruido"<<std::endl;
}