//
// Created by Alumnos on 13/06/2024.
//

#include "Orco.h"

Orco::Orco() {
    danomazo=0;
    vidadelorco=0;
}
Orco::Orco(std::string TipoDeEnemigo, float DanoEnemigo, int danomazo, float vidadelorco) {
    this-> danomazo=danomazo;
    this-> vidadelorco=vidadelorco;
}

Orco::~Orco(){
    std::cout<<"El Orco ha sido destruido"<<std::endl;
}

void Orco::RobarDano() {
    std::cout<<"El Orco ha hecho daño"<<std::endl;
}