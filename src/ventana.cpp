#include <iostream>
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <thread>
#include <Dibujo.hpp>
#include <list>
#include <experimental/random>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    list<Dibujo> dibujos;
    for (int i = 0; i < 20; i++)
    {
        list<string> c;
        c.push_back("Personaje:"+ to_string/(i));
        c.push_back(" 0");
        c.push_back("--|--");
        c.push_back)("/ \\");

         Dibujo contenido(c, experimental::randint(0,20), experimental::randint(0,20)); 
         dibujos.push_back(contenido);
    }
    
    auto pantalla = Screen::Create(Dimension::Full(), Dimension::Full());

    while (true)
    {
        pantalla.Clear();
        this_thread::sleep_for(0.1s);

        for (auto &&i : dibujos)
        {
            i.DesplazarX(experimental::randint(-1,1));
            i.DesplazarY(experimental::randint(-1,1));
        }
        
        for (auto &&i : dibujos)
        {
           i.Dibujar(pantalla); 
        }
        
       pantalla.Print();
        
        cout << pantalla.ResetPosition();

    }

    return 0;
}