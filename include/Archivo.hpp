#pragma once
#include <fstream>
#include <list>
#include <Dibujo.hpp>

using namespace std;
using namespace ftxui;

class Archivo
{
private:
    fstream archivo;
    list<string> contenido;
public:
    Archivo(string path){
        archivo.open(path);
        while(!archivo.eof())
        {
            string linea;
            getline(archivo,linea);
            lineas.emplace_back(text(linea));
        }
        this->contenido=vbox(linea);
        archivo.close();
    }
    Dibujo CrearDibujo(){
        Dibujo temp;
        return temp
    }
    ~Archivo(){}
};
