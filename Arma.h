
#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_ARMA_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_ARMA_H

#include "Item.h"
class Arma : public Item{
public:
    Arma(std::string nombre,int dano);
    ~Arma() override;

    void usar() override;

private:
    std::string nombre;
    int dano;
};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_ARMA_H
