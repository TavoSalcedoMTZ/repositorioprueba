//
// Created by Alumnos on 11/06/2024.
//

#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_ENEMIGO_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_ENEMIGO_H

#include <iostream>
#include <string>
#include "Entidad.h"
class Enemigo:public Entidad {
public:
Enemigo();
Enemigo(std::string TipoDeEnemigo, float DanoEnemigo);
virtual ~Enemigo();

virtual void RobarDano();
private:
    std::string TipoDeEnemigo;
    float DanoEnemigo;
};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_ENEMIGO_H
