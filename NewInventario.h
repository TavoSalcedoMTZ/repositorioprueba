//
// Created by sdedf on 18/06/2024.
//

#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_NEWINVENTARIO_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_NEWINVENTARIO_H

#include <iostream>
#include "Item.h"
#include <vector>
class NewInventario {
public:
NewInventario();
~NewInventario();

void AddNewItem(Item* item);
void ShowNewItem()const;

private:
    std::vector<Item*> Obj;



};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_NEWINVENTARIO_H
