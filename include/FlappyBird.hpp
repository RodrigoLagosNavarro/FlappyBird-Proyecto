#ifndef FLAPPYBIRD_HPP
#define FLAPPYBIRD_HPP

#include "Bird.hpp"
#include "Pipe.hpp"

class FlappyBird {
public:
    FlappyBird();
    void startGame();
private:
    Bird bird;
    Pipe pipe;
};

#endif
