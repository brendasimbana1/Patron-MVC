#include "vista.h"

Vista::Vista()
{
    controlador= new Controlador();
}

void Vista::actualizarNota()
{
    int a;
    int nota = 0;
    do{
        cout << "Ingrese la posicion de la nota a actualizar: ";
        cin >> a;
    } while (a < 1 or a > 3);
    do{
        cout << "Ingrese la nota " << a << ": ";
        cin >> nota;
    } while (nota < 0 or nota > 10);
    controlador->actualizarNota(a, nota);
    cout << "Nota " << a <<" actualizada! " << endl;
}

void Vista::notaAgregada(){
    char op;
    cout << "Desea agregar dos puntos a la menor nota? (s/n): ";
    cin >> op;

    if (op == 'S' or op == 's'){
        cout << "Dos puntos agregados a " << controlador->menorNota() << " !\n";
        controlador->notaAgregada();
    }else{
        cout << "Opcion no valida";
    }
}

void Vista::estado()
{
    cout << controlador->getEstado();
}

void Vista::imprimir()
{
    cout << controlador->visualizar();
}
