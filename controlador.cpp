#include "controlador.h"

float Controlador::promedio()
{
    return (modelo->getNota1() + modelo->getNota2() + modelo->getNota3())/3.0;
}

Controlador::Controlador()
{
    this->modelo = new Estudiante("Ariel", 5, 7, 9);
}

void Controlador::actualizarNota(int nota, int valor)
{
    switch (nota){
        case 1:
            modelo->setNota1(valor);
        break;
        case 2:
            modelo->setNota2(valor);
        break;
        case 3:
            modelo->setNota3(valor);
        break;
    }
}

int Controlador::menorNota()
{
    if (modelo->getNota1() < modelo->getNota2() and modelo->getNota1() < modelo->getNota3()){
        return modelo->getNota1();
    }else if (modelo->getNota2() < modelo->getNota1() and modelo->getNota2() < modelo->getNota3()){
        return modelo->getNota2();
    }else if (modelo->getNota3() < modelo->getNota1() and modelo->getNota3() < modelo->getNota1()){
        return modelo->getNota3();
    }else{
        return 0;
    }
}

void Controlador::notaAgregada()
{
    if (menorNota() == modelo->getNota1())
        modelo->setNota1(menorNota() + 2.0);
    else if (menorNota() == modelo->getNota2())
        modelo->setNota2(menorNota() + 2.0);
    else if (menorNota() == modelo->getNota3())
        modelo->setNota3(menorNota() + 2.0);
}

string Controlador::getEstado()
{
    string st;
    if(promedio() >= 7.0)
        st = "Aprobado";
    else if (promedio() >= 6.0 and promedio() < 7.0)
        st = "Suspendido";
    else if (promedio() >= 2.0 and promedio() < 6.0)
        st = "Remedial";
    else
        st = "Reprobado";
    return "\nEstado: " + st + "\n";
}

string Controlador::visualizar()
{
    string str = "\nEstudiante: " + modelo->getNombre() +
            " \nNota 1: " + to_string(modelo->getNota1()) +
            " \nNota 2: " + to_string(modelo->getNota2()) +
            " \nNota 3: " + to_string(modelo->getNota3()) +
            " \nPromedio: " + to_string(promedio()) + "\n";
    return str;

}
