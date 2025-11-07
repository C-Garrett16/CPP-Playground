#pragma once

class Enemy {
    public:
        static int hp;
        static int attackPower;
        
        
        static int takeDamage(int attack);
        static bool isAlive();
};