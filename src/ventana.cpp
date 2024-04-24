#include <iostream>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <
#include <

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
int posicionInicial=0;
int posicionX=0;
int posicionY=0;
string prueba= "DVD";

while(true){
    poicionInicialY++;
    this_thread::sleep_for(0.1s);
    auto pantalla= Screen::Create(Dimension::Full(),Dimension::Fixed(10));
    Render(pantalla,border(text("Hola")));
    pantalla.PixelAt(5,5).character='m';
 
    for (auto &&letra : prueba)
    {
        pantalla.PixelAt(posicionX,posicionY).character=letra;
        posicionX++;
    }
    pantalla.Print();
    }
    

    return 0;
}                        

