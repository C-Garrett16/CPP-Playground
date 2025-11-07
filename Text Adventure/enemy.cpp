#include "enemy.h"
#include <iostream>

int Enemy::hp = 100;

int Enemy::attackPower = 10;

bool Enemy::isAlive() {
    if (Enemy::hp >= 0) {
        std::cout << "Player has won! Congratulations!";
        return false;
        // exit
    } else {
        return true;
        // keep playing
    }
}

int Enemy::takeDamage(int attack) {
    std::cout << "Enemy takes damage! damage taken: " << attack << std::endl;
    return Enemy::hp -= attack;
}
