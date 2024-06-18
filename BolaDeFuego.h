//
// Created by Alumnos on 18/06/2024.
//

#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_BOLADEFUEGO_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_BOLADEFUEGO_H

#include "Habilidades.h"
class BolaDeFuego :public Habilidades{
public:
        BolaDeFuego();
        ~BolaDeFuego() override;

        void usar() override;
};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_BOLADEFUEGO_H
