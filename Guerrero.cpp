//
// Created by Alumnos on 11/06/2024.
//

#include "Guerrero.h"

Guerrero::Guerrero(){
Arma="";
Clase="";
}

Guerrero:: Guerrero(float Vida, float Escudo, float Velocidad, float Dano,std::string Arma, std::string Clase){
    this->Arma=Arma;
    this->Clase=Clase;
}
Guerrero::~Guerrero() {
    std::cout << "El guerrero se ha destruido" << std::endl;
}