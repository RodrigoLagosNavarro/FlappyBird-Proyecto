#include "FlappyBird.hpp"
#include <iostream>

FlappyBird::FlappyBird() {
    for (int i = 0; i < 10; ++i) {
        pipes.push_back(Pipe(rand() % 15 + 5)); // Random height for each pipe
    }
}

void FlappyBird::startGame() {
    for (int i = 0; i < 50; ++i) { // Game loop
        system("clear"); // Clear the console
        updateGame();
        drawGame();
        usleep(100000); // Sleep for 0.1 second
    }
}

void FlappyBird::updateGame() {
    for (auto& pipe : pipes) {
        pipe.move();
    }
}

void FlappyBird::drawGame() const {
    for (int i = 0; i < 20; ++i) { // Draw the game screen
        for (int j = 0; j < 50; ++j) {
            bool isPipe = false;
            for (const auto& pipe : pipes) {
                if (pipe.getX() == j && (i <= pipe.getY() || i >= pipe.getY() + 5)) {
                    std::cout << "|"; // Draw pipe
                    isPipe = true;
                    break;
                }
            }
            if (!isPipe) {
                std::cout << " "; // Draw empty space
            }
        }
        std::cout << std::endl;
    }
}