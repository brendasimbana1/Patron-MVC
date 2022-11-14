#ifndef VISTA_H
#define VISTA_H

#include<iostream>
#include "controlador.h"
using namespace std;

class Vista
{
private:
    Controlador *controlador;
public:
    Vista();
    void actualizarNota();
    void imprimir();
    void notaAgregada();
    void estado();
};

#endif // VISTA_H
