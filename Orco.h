//
// Created by Alumnos on 13/06/2024.
//

#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_ORCO_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_ORCO_H


#include "Enemigo.h"
class Orco :public Enemigo {
public:
    Orco();
    Orco(std::string TipoDeEnemigo, float DanoEnemigo,int danomazo,float vidadelorco);
    ~Orco() override;
    void RobarDano() override;

    void setDanoMazo(int danomazo);
    int GetDanoMazo(){
        return danomazo;
    }
    void setVidaOrco(float vidadelorco);
    float getVidaOrco(){
        return vidadelorco;
    }
private:
    int danomazo;
    float vidadelorco;
};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_ORCO_H
