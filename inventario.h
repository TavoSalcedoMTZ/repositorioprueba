//
// Created by Alumnos on 13/06/2024.
//

#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_INVENTARIO_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_INVENTARIO_H

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
class inventario {
public:
    inventario();
    ~inventario();

    void AddItem(std::string Item);
    void EliminarItem(std::string Item);
    void BuscarItem();

private:
    std::vector<std::string> slots;

};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_INVENTARIO_H