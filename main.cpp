#include <iostream>
#include "libro.h"
#include "articulo.h"
#include "bibliografia.h"

using namespace std;

int main()
{
    int op;
    Bibliografia bi;
    do{
        cout << "1. Agregar Libro" << endl;
        cout << "2. Agregar Articulo" << endl;
        cout << "3. Mostrar Referencias" << endl;
        cout << "4. Salir" << endl;
        do
        {
            cout << "Ingrese la opcion: ";
            cin >> op;
            if(op < 0 or op > 4)
            {
                cout << "Error..." << endl;
            }
        }while(op < 0 or op > 4);
        switch(op){
        case 1:
            bi.agregarLibro();
            break;
        case 2:
            bi.agregarArticulo();
            break;
        case 3:
            bi.imprimirReferencias();
            break;
        }
    }while(op != 4);

    return 0;
}
