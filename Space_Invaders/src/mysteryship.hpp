#pragma once
#include <raylib.h>

class MysteryShip {
    public:
        MysteryShip();
        ~MysteryShip();
        void Update();
        void Draw();
        void Spawn();
    private: 
        Vector2 position;
        Texture2D image;
        int speed;
};