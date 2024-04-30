#include <iostream>
#include <string>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
Dibujo palabra1;
Dibujo palabra2;

auto pantalla= Screen::Create(Dimension::Full(),Dimension::Full());

while(true){
    this_thread::sleep_for(0.1s);
    
    palabra1.Dibujar(Pantalla);
    palabra2.Dibujar(Pantalla);

    pantalla.Print();
    pantalla.Clear();
    cout<<pantalla.ResetPosition();


    }
    

    return 0;
}                        

