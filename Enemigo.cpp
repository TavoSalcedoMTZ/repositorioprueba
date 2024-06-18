//
// Created by Alumnos on 11/06/2024.
//

#include "Enemigo.h"
   Enemigo::Enemigo(){
    this -> TipoDeEnemigo=TipoDeEnemigo;
    this->DanoEnemigo=DanoEnemigo;
}
Enemigo::Enemigo(std::string TipoDeEnemigo, float DanoEnemigo){
    this->TipoDeEnemigo=TipoDeEnemigo;
    this->DanoEnemigo=DanoEnemigo;
}
Enemigo::~Enemigo() {
    {
        std::cout<<"El enemigo ha sido destruido"<<std::endl;
    }
}

void Enemigo::RobarDano() {
    std::cout<<"El enemigo ha hecho daño"<<std::endl;
}