#include "vista.h"

Vista::Vista()
{
    controlador= new Controlador();
}

void Vista::actualizarNota()
{
    int nota = 0;
    int n;
    do{
        cout << "Ingrese la posicion de la nota a actualizar: ";
        cin >> n;
    } while (n < 1 or n > 3);
    do{
        cout << "Ingrese la nota " << n << ": ";
        cin >> nota;
    } while (nota < 0 or nota > 10);
    controlador->actualizarNota(n, nota);
    cout << "Nota " << n <<" actualizada! " << endl;
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
