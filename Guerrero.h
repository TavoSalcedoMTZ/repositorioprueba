//
// Created by Alumnos on 11/06/2024.
//

#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_GUERRERO_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_GUERRERO_H

#include "Personaje.h"
#include "inventario.h"

class Guerrero: public Personaje,public inventario{
public:
    Guerrero();
    Guerrero(float Vida, float Escudo, float Velocidad, float Dano,std::string Arma, std::string Clase);
    ~Guerrero() override;

    void Atacar() override{
        std::cout<<"EL Guerrero ha atacado"<<std::endl;
    };
    void setArma(std::string Arma);
    std::string GetArma(){
        return Arma;
    }
    void setClase(std::string Clase);
    std::string GetClase(){
        return Clase;
    }
private:
    std::string Arma;
    std::string Clase;
};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_GUERRERO_H