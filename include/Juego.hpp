#pragma once 
#include <iostream>
#include "SFML/Graphics.hpp"
#include "Bird.hpp"
#include "Sonido.hpp"


class Juego
{
private:
public:
    Juego();
    ~Juego();
    void Ventana();
};

void Juego::Ventana()
{
    sf::Texture fondoTextura;
    sf::Sprite fondo;

    if(fondoTextura.loadFromFile("assets/Fondo.png"))
    {
        std::cout<<"Error al cargar la textura"<<std::endl;
    }

    fondo.setTexture(fondoTextura);
    fondo.setPosition(0,-15);
    fondo.setScale(1.5f,1.5f);

    bool inciado;
    bool presionado;

    sf::RenderWindow ventana(sf::VideoMode(800,600),"Flappy Bird");
    ventana.setFramerateLimit(60);

    presionado = false;

    Sonido sonido;

    while (ventana.isOpen())
    {
        

    }

}


