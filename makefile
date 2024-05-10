CC=g++
CFLAGS=-c -Wall

all: flappybird

flappybird: main.o FlappyBird.o Bird.o Pipe.o
    $(CC) main.o FlappyBird.o Bird.o Pipe.o -o flappybird

main.o: src/main.cpp
    $(CC) $(CFLAGS) src/main.cpp

FlappyBird.o: src/FlappyBird.cpp
    $(CC) $(CFLAGS) src/FlappyBird.cpp

Bird.o: src/Bird.cpp
    $(CC) $(CFLAGS) src/Bird.cpp

Pipe.o: src/Pipe.cpp
    $(CC) $(CFLAGS) src/Pipe.cpp

clean:
    rm -rf *o flappybird
