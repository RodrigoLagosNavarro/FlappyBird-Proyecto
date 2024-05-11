#ifndef PIPE_HPP
#define PIPE_HPP

class Pipe {
public:
    Pipe(int initialX, int initialY);
    void moveLeft();
    int getX();
    int getY();
private:
    int x;
    int y;
};

#endif
