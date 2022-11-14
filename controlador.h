#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "estudiante.h"

class Controlador
{
private:
    //obj dinámico
    Estudiante *modelo;
    float promedio();
public:
    Controlador();
    void actualizarNota(int nota, int valor);
    int menorNota();
    void notaAgregada();
    string getEstado();
    string visualizar();

};

#endif // CONTROLADOR_H
