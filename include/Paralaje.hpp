#include <iostream>
#include "SFML/Graphics.hpp"
#include <time.h>
#include "Obstaculo.hpp"

class Paralaje : public sf::Drawable 
{
private:
    int ultimo;
    int puntaje;
    bool inciado;
    sf::Texture obstaculoT;
    sf::Texture baseT;
    std::vector<sf::Sprite> bases;
    std::vector<Obstaculo> obstaculos;
public:
    Paralaje ();
    void Actualizar();
    bool Colision(sf::IntRect);
    void Inciado();
    int Puntaje();
    virtual void draw(sf::RenderTarget&, sf::RenderStates) const;
};