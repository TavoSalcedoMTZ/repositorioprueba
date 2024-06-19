//
// Created by sdedf on 18/06/2024.
//

#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_POCION_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_POCION_H
#include "iostream"
#include "string"
#include "Item.h"
class Pocion :public Item {
public:
    Pocion();
    ~Pocion() override;

    void usar() override;


private:
    std::string nombre;
    int puntosvida;
};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_POCION_H
