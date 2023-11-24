#include "bibliografia.h"
#include "documento.h"

Bibliografia::Bibliografia() {

}

Bibliografia::Bibliografia(string libro, string articulo, string ref)
    : libro(libro), articulo(articulo), ref(ref)
{

}

bool Bibliografia::agregarLibro() {
    cout<<"Ingresar libro:";
    getline(cin>>ws, libro);
    return true;
}

bool Bibliografia::agregarArticulo() {
    cout<<"Ingresar articulo: ";
    getline(cin>>ws, articulo);
    return true;
}

void Bibliografia::imprimirReferencias() {

    for(int i=0;i<referencias.size();i++)
    {
        cout<<referencias[i]->obtenerReferencia();
    }
}

