#include "inventario.h"
inventario::inventario(){};
inventario::~inventario() {
    std::cout<<"El inventario ha sido destruido"<<std::endl;
}

void inventario::AddItem(std::string Item) {
    slots.push_back(Item);
}

void inventario::EliminarItem(std::string Item) {
    auto it=std::find(slots.begin(),slots.end(),Item);
    slots.erase(it);
}

void inventario::BuscarItem() {
    for(std::string val: slots){
        std::cout<<val<<""<<std::endl;
    }
}