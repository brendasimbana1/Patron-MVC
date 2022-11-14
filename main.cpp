#include <iostream>

//#include "estudiante.h"
//#include "controlador.h"
#include "vista.h"

using namespace std;

int main()
{
    cout << "\t---PATRON MVC----" << endl;
   /*Estudiante e;
    cout << e.toString();

    Controlador c;
    cout << c.visualizar();*/

    Vista *vista = new Vista();
    int opc;
    do{
        cout << "\n---MENU PRINCIPAL---\n";
        cout << "1. Mostrar datos del estudiante\n";
        cout << "2. Actualizar nota\n";
        cout << "3. Agregar dos puntos a la menor nota\n";
        cout << "4. Obtener estado del estudiante\n";
        cout << "5. Salir\n";
        //validar opc de menu
        do{
            cout << "Ingrese su opcion: ";
            cin >> opc;
        } while (opc < 1 or opc > 5);
        //operaciones
        switch (opc){
        case 1:
            vista->imprimir();
            break;
        case 2:
            vista->actualizarNota();
            break;
        case 3:
            vista->notaAgregada();
            break;
        case 4:
            vista->estado();
            break;
        case 5:
            cout << "Gracias por usar este programa!\n";
            break;
        default:
            cout << "Opcion no valida!\n";
            break;
        }
    } while (opc != 5);


    return 0;
}
