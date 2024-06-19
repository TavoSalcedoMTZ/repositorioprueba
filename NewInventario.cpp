

#include "NewInventario.h"
NewInventario::NewInventario() {}
NewInventario::~NewInventario() {
    std::cout<<"Inventario Destruido"<<std::endl;
}

void NewInventario::AddNewItem(Item *item) {
    Obj.push_back(item);
}

void NewInventario::ShowNewItem() const {
    for(Item* item:Obj){
      item->usar();
  }
}