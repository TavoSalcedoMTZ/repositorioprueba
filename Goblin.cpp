//
// Created by Alumnos on 11/06/2024.
//

#include "Goblin.h"
Goblin::Goblin() {
    danoespada=0;
    clasegoblin="";
}
Goblin::Goblin(std::string TipoDeEnemigo, float DanoEnemigo, int danoespada, std::string clasegoblin) {
    this-> danoespada=danoespada;
    this-> clasegoblin=clasegoblin;
}

Goblin::~Goblin(){
    std::cout<<"El Goblin ha sido destruido"<<std::endl;
}

void Goblin::RobarDano() {
    std::cout<<"El Goblin ha hecho daño"<<std::endl;
}