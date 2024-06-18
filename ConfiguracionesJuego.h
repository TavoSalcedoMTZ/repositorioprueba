//
// Created by Alumnos on 18/06/2024.
//

#ifndef POLIFORMISMO_ORIENTADO_A_OBJETOS_CONFIGURACIONESJUEGO_H
#define POLIFORMISMO_ORIENTADO_A_OBJETOS_CONFIGURACIONESJUEGO_H

#include <iostream>
#include <string>
class ConfiguracionesJuego {
ConfiguracionesJuego();
~ConfiguracionesJuego();

void SetResolucion(int Resolucion);
int GetResolucion();
void SetVolumen(int Volumen);
int GetVolumen();
void SetDificultad(std::string Dificultad);
std::string GetDificultad();

private:
    int Resolucion;
    int Volumen;
    std::string Dificultad;
};


#endif //POLIFORMISMO_ORIENTADO_A_OBJETOS_CONFIGURACIONESJUEGO_H
