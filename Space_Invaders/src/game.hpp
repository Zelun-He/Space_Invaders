#pragma once
#include "spaceship.hpp"
#include "Obstacle.hpp"
class Game {
public:
    Game();       // Constructor
    ~Game();      // Destructor
    void Draw();  // Drawing function
    void Update(); // Update logic (movement, etc.)
    void HandleInput(); // Handle input, like key presses
private:
    void DeleteInactiveLasers();
    Spaceship spaceship; // Spaceship instance
    std::vector<Obstacle> CreateObstacles();
    std::vector<Obstacle> obstacles;
};
