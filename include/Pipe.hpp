#ifndef PIPE_HPP
#define PIPE_HPP

class Pipe {
public:
    Pipe(int startY);
    void move();
    int getX() const;
    int getY() const;
private:
    int positionX;
    int positionY;
};

#endif // PIPE_HPP