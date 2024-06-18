//
// Created by Alumnos on 18/06/2024.
//

#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_CURAR_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_CURAR_H

#include "Habilidades.h"
class Curar:public Habilidades {
public:
    Curar();

    ~Curar() override;

    void usar() override;
};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_CURAR_H
