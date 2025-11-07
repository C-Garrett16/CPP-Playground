#pragma once

class Enemy {
    public:
        static int hp;
        static int attackPower;


        static void takeDamage(int attack);
        static bool isAlive();
};
