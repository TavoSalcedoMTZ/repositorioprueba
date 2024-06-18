#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_PERSONAJE_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_PERSONAJE_H
#include<iostream>
#include"Entidad.h"
class Personaje:public Entidad {
public:
    Personaje();
    Personaje(float Vida, float Escudo, float Velocidad, float Dano);
    virtual ~Personaje();


    virtual void Atacar();

    void SetVida(float Vida);
    float GetVida(){
        return Vida;
    }
    void SetEscudo(float Escudo);

    float GetEscudo(){
        return Escudo;
    }

    void SetVelocidad(float Velocidad);

    float GetVelocidad(){
        return Velocidad;
    }

    void SetDano(float Dano);
    float GetDano(){
        return Dano;
    }
private:
    float Vida;
    float Escudo;
    float Velocidad;
    float Dano;
};


#endif