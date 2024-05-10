#include "Pipe.hpp"

Pipe::Pipe(int startY) : positionX(50), positionY(startY) {}

void Pipe::move() {
    positionX--;
}

int Pipe::getX() const {
    return positionX;
}

int Pipe::getY() const {
    return positionY;
}