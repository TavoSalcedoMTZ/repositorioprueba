//
// Created by sdedf on 18/06/2024.
//

#include "Pocion.h"
Pocion::Pocion() {
}

Pocion::~Pocion(){
   std::cout<<"Pocion destruida"<<std::endl;
}

void Pocion::usar() {
   std::cout<<"La pocion ha sido utilizada y ha restaurado vida"<<std::endl;
}