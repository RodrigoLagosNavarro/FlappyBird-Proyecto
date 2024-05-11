#include "Bird.hpp"

Bird::Bird(int initialX, int initialY) : x(initialX), y(initialY) {}

void Bird::moveUp() {
    y -= 2;
}

int Bird::getX() {
    return x;
}

int Bird::getY() {
    return y;
}
