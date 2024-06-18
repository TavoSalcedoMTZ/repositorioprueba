#include <iostream>
#include "inventario.h"
#include "Guerrero.h"
int main() {
    inventario i;

    i.AddItem("Espada");
    i.BuscarItem();
    i.EliminarItem("Espada");


    Guerrero Espadachin;
    Espadachin.AddItem("Espada");
    Espadachin.AddItem("Funda");
    Espadachin.AddItem("Pociones");
    Espadachin.BuscarItem();
    Espadachin.EliminarItem("Funda");
    Espadachin.BuscarItem();
}