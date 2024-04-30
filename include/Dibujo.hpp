#pragma once
#include <string>
#include <ftxui/screen/screen.hpp>

class Dibujo
{
private:
    int posicionX;
    int posicionY;
    string palabra;

public:
    Dibujo(){
        this->posicionX=0;
        this->posicionY=0;

    }
    void Dibujar(ftxui::Screen Pantalla){
    int posicionPalabraX=0;
    int posicionPalabraY=0;

    for (auto &&letra : palabra)
    {
        int posicionFinalX=posicionX+posicionPalabraX;
        int posicionFinalY=posicionY+posicionPalabraY;

        Pantalla.PixelAt(
            posicionFinalX,
            posicionFinalY
        ). character=letra;
        posicionPalabraX++;
    }

    }
    }
    ~Dibujo();
};
