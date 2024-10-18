#pragma once
#include "spaceship.hpp"

class Game {
public:
    Game();       // Constructor
    ~Game();      // Destructor
    void Draw();  // Drawing function
    void Update(); // Update logic (movement, etc.)
    void HandleInput(); // Handle input, like key presses
private:
    Spaceship spaceship; // Spaceship instance
};
