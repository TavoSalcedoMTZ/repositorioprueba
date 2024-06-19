//
// Created by sdedf on 18/06/2024.
//

#include "Arma.h"

Arma::Arma(std::string nombre,int dano) {}
Arma::~Arma(){
    std::cout<<"El arma Ha sido destruida"<<std::endl;
}

void Arma::usar() {
    std::cout<<"El arma ha sido utilizada"<<std::endl;

}
