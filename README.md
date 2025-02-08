# Space Invaders Clone

## Overview
This project is a **Space Invaders** clone developed in **C++** using the **Raylib** game development library. The game faithfully recreates the classic arcade experience, featuring enemy waves, laser shooting, obstacles, a mystery ship, and a high-score tracking system.

## Features
- **Classic Space Invaders Gameplay** – Control a spaceship to shoot down alien invaders before they reach the ground.
- **Multiple Alien Types** – Different enemy types with varying point values.
- **Obstacles for Cover** – Destructible barriers that provide temporary protection.
- **Mystery Ship Bonus** – A randomly spawning ship that grants extra points.
- **Sound Effects and Music** – Integrated background music and explosion sounds.
- **High Score Tracking** – Saves and loads the highest score from a file.
- **Game Restart Mechanism** – Reset the game with the Enter key after losing all lives.

## Controls
- **Left Arrow / A** – Move spaceship left
- **Right Arrow / D** – Move spaceship right
- **Spacebar** – Fire laser
- **Enter** – Restart the game after Game Over

## Installation
1. **Install Raylib**: Ensure you have **Raylib** installed on your system. You can download it from [Raylib's official website](https://www.raylib.com/).
2. **Clone the Repository**:
   ```sh
   git clone <repository_url>
   cd space-invaders-raylib
   ```
3. **Compile the Game** (using g++)
   ```sh
   g++ -o space_invaders main.cpp game.cpp spaceship.cpp alien.cpp laser.cpp obstacle.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
   ```
4. **Run the Game**:
   ```sh
   ./space_invaders
   ```

## Dependencies
- **Raylib** – Handles graphics, sound, and input.
- **C++ STL** – Used for handling game objects and collections.

## File Structure
- `main.cpp` – Entry point for the game.
- `game.hpp` / `game.cpp` – Core game logic and mechanics.
- `spaceship.hpp` / `spaceship.cpp` – Player spaceship logic.
- `alien.hpp` / `alien.cpp` – Alien enemy behavior.
- `laser.hpp` / `laser.cpp` – Laser shooting mechanics.
- `obstacle.hpp` / `obstacle.cpp` – Obstacles that block lasers.
- `Sounds/` – Contains background music and sound effects.
- `highscore.txt` – Stores the highest score achieved.

## Future Improvements
- Add power-ups and new enemy behaviors.
- Implement a menu and difficulty selection.
- Enhance visuals with better sprite animations.

## Author
Developed by Zelun He using **Raylib** and **C++**. Feel free to contribute or suggest improvements!

## License
This project is open-source under the **MIT License**.

