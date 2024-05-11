#include "Pipe.hpp"

Pipe::Pipe(int initialX, int initialY) : x(initialX), y(initialY) {}

void Pipe::moveLeft() {
    x--;
}

int Pipe::getX() {
    return x;
}

int Pipe::getY() {
    return y;
}
