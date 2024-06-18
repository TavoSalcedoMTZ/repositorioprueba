//
// Created by Alumnos on 11/06/2024.
//


#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_MAGO_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_MAGO_H

#include "Personaje.h"
#include "inventario.h"
class Mago: public Personaje,public inventario{
public:
    Mago();
    Mago(float Vida, float Escudo, float Velocidad, float Dano, std::string tipodemagia, float cantidaddemana);
    ~Mago() override;

    void Atacar() override{
        std::cout<<"EL Mago ha atacado"<<std::endl;
    };
    void SetMagia(std::string tipodemagia);
    std::string GetMagia(){
        return tipodemagia;
    }
    void SetMana(float cantidaddemana);

    float GetMana(){
        return cantidaddemana;
    }


private:
    std::string tipodemagia;
    float cantidaddemana;



};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_MAGO_H