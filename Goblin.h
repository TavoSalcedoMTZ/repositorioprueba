//
// Created by Alumnos on 11/06/2024.
//

#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_GOBLIN_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_GOBLIN_H

#include "Enemigo.h"
class Goblin :public Enemigo {
public:
    Goblin();
    Goblin(std::string TipoDeEnemigo, float DanoEnemigo,int danoespada,std::string clasegoblin);
    ~Goblin() override;
    void RobarDano() override;

   void setDanoEspada(int danoespada);
   int GetDanoEspada(){
       return danoespada;
   }
   void setClaseGoblin(std::string clasegoblin);
   std::string getClaseGoblin(){
       return clasegoblin;
   }
private:
    int danoespada;
    std::string clasegoblin;
};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_GOBLIN_H
