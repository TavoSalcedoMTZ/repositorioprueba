#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_PERSONAJE_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_PERSONAJE_H
#include<iostream>
#include"Entidad.h"
#include <vector>
#include "Habilidades.h"
#include "BolaDeFuego.h"
#include "Curar.h"
#include"NewInventario.h"
#include "inventario.h"
class Personaje:public Entidad, public NewInventario, public inventario{
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

    void AddHab(Habilidades* habilidad);
    void ShowHab() const;

private:
    float Vida;
    float Escudo;
    float Velocidad;
    float Dano;
    std::vector<Habilidades*> ObjHabilidades;

};


#endif