#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Bird.hpp"
#include "Pipe.hpp"

#define xSize       32 
#define ySize       16 
#define pipeCount   3
#define qKey        0x51
#define GREEN       "\e[32m"
#define YELLOW      "\e[33m"
#define NC          "\e[0m"

void Draw(Bird &bird, Pipe pipes[]);
void Pipes(Pipe pipes[]);
void HitTest(Bird &bird, Pipe pipes[]);

void Draw(Bird &bird, Pipe pipes[]) {
    char buff[5000];
    strcpy(buff, "\e[17A");

    for (int y = 0; y <= ySize; y++) {
        for (int x = 0; x <= xSize; x++) {
            // Resto del código de la función Draw
        }
    }

    printf(buff);
}

void Pipes(Pipe pipes[]) {
    for (int i = 0; i < pipeCount; i++) {
        if (pipes[i].getX() == -1) {
            (i == 0) ? (pipes[i].x = pipes[2].getX() + 15) : (pipes[i].x = pipes[i - 1].getX() + 15);
            pipes[i].y = (rand()%7) + 5;
        }
    }
}

void HitTest(Bird &bird, Pipe pipes[]) {
    if (bird.getY() == 15) {
        exit(0);
    }

    for (int i = 0; i < pipeCount; i++) {
        // Resto del código de la función HitTest
    }
}

int main() {
    srand(time(NULL));
    system("title \"Not Flappy Duck\"");

    Bird bird(10, 10);
    Pipe pipes[pipeCount] = {Pipe(25, (rand()%7) + 5), Pipe(40, (rand()%7) + 5), Pipe(55, (rand()%7) + 5)};

    int frame = 0;

    printf("Press UP to jump and Q to quit.\n");

    for (int i = 0; i <= ySize; i++) {
        printf("\n");
    }

    Draw(bird, pipes);

    system("pause>nul");

    while (1) {
        if (GetAsyncKeyState(VK_UP)) {
            bird.moveUp();
        }

        if (GetAsyncKeyState(qKey)) {
            break;
        }

        if (frame == 2) {
            bird.moveDown();
            for (int i = 0; i < 3; i++) {
                pipes[i].moveLeft();
            }
            frame = 0;
        }

        HitTest(bird, pipes);
        Draw(bird, pipes);
        Pipes(pipes);
        frame++;
        Sleep(100);
    }

    return 0;
}
