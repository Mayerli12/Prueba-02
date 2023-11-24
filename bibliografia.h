#ifndef BIBLIOGRAFIA_H
#define BIBLIOGRAFIA_H

#include<vector>
#include<iostream>

#include "documento.h"

class Articulo;
using namespace std;

class Bibliografia
{
private:
    vector <Documento*> referencias;
    string libro, articulo, ref;
public:
    Bibliografia();
    Bibliografia(string libro, string articulo, string ref);
    bool agregarLibro();
    bool agregarArticulo();
    void imprimirReferencias();

};

#endif // BIBLIOGRAFIA_H
