#include <iostream>
#include "Guerrero.h"
#include "BolaDeFuego.h"
#include "Curar.h"
#include "Arma.h"
#include "Pocion.h"
#include "Mago.h"
#include "Enemigo.h"
#include "Goblin.h"
#include "Orco.h"
#include "ConfiguracionesJuego.h"

class ConfiguracionesJuego;

int main() {

//punteros para habilidades
    BolaDeFuego* fire=new BolaDeFuego();
    Curar* heal= new Curar();
    //punteros items
    Arma*  weapon= new Arma("Espada del Augurio",999);
    Pocion* potion= new Pocion();
    //Creacion de Personajes
    std::cout<<"CREAR PERSONAJES"<<std::endl <<"====================================="<<std::endl<<std::endl;
    Personaje p1(50,52,5,7);
    Guerrero g1(100,80,10,14,"Guadaña","Asesino");
    Mago m1(30,10,2,18,"Agua",89.3);
    std::cout<<"Personajes Creados"<<std::endl;
    std::cout<<"CREAR Enemigos"<<std::endl <<"====================================="<<std::endl<<std::endl;
    Enemigo e1("Base",2);
    Goblin d1("Intermedio",10,19,"Obrero");
    Orco o1("Alto",50,34,250);
    std::cout<<"Enemigos Creados"<<std::endl;
    std::cout<<"Habilidades"<<std::endl <<"====================================="<<std::endl<<std::endl;
    //implementacion de habilidades
    g1.AddHab(fire);
    m1.AddHab(heal);
    m1.AddHab(fire);
    g1.ShowHab();
    m1.ShowHab();
    std::cout<<"ITEMS"<<std::endl <<"====================================="<<std::endl<<std::endl;
//implementacion de items

//inventario primitivo items añadibles y borrables por medio de strings
    m1.AddItem("Varita");
    m1.AddItem("Lyandry");
    m1.BuscarItem();
    m1.EliminarItem("Lyandry");
    m1.BuscarItem();
    // Inventario por medio de clases y objetos
    g1.AddNewItem(weapon);
    g1.AddNewItem(potion);
    g1.ShowNewItem();
    //La verdad no pude hacer que el sistema de borrar con este metodo funcionara correctametne utilizando punteros dinamicos

    std::cout<<std::endl<<"Configuraciones del juego"<<std::endl <<"====================================="<<std::endl<<std::endl;

ConfiguracionesJuego cx1;
cx1.SetResolucion(1980);
cx1.GetResolucion();
cx1.SetVolumen(100);
cx1.GetVolumen();
cx1.SetDificultad("HARD");
cx1.GetDificultad();


return 0;
}