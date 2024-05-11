#ifndef BIRD_HPP
#define BIRD_HPP

class Bird {
public:
    Bird(int initialX, int initialY);
    void moveUp();
    int getX();
    int getY();
private:
    int x;
    int y;
};

#endif
