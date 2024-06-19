//
// Created by Alumnos on 11/06/2024.
//
#include <iostream>
#include "Personaje.h"

Personaje::Personaje(){
    this->Vida=Vida;
    this->Escudo=Escudo;
    this->Velocidad=Velocidad;
    this->Dano=Dano;
}

Personaje::Personaje(float Vida, float Escudo, float Velocidad, float Dano) {
    this->Vida = Vida;
    this->Escudo = Escudo;
    this->Velocidad = Velocidad;
    this->Dano = Dano;
}
Personaje::~Personaje() {
    std::cout<<"Personaje Destruido"<<std::endl;
}

void Personaje::Atacar() {
    std::cout<<"Personaje Ataco"<<std::endl;
}
void Personaje::SetVida(float Vida){}

void Personaje::AddHab(Habilidades *habilidad) {
    ObjHabilidades.push_back(habilidad);
}

void Personaje::ShowHab() const {
    for( Habilidades* habilidad:ObjHabilidades){
        habilidad->usar();
    }
}




