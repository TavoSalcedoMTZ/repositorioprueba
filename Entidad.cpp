//
// Created by Alumnos on 18/06/2024.
//

#include "Entidad.h"
Entidad::Entidad() {
}
Entidad::~Entidad(){
    std::cout<<"Entidad Destruida"<<std::endl;
}

void Entidad::Actualizar() {
    std::cout<<"La entidad se ha actualizado"<<std::endl;
}