#include "enemy.h"
#include <iostream>

int Enemy::hp = 100;

int Enemy::attackPower = 10;

bool Enemy::isAlive() {

    if (Enemy::hp <= 0) {
        std::cout << "Player has won! Congratulations!";
        return 0;
        // exit
    } else {
        return true;
        // keep playing
    }
}

void Enemy::takeDamage(int attack) {
    Enemy::hp -= attack;
    std::cout << "Enemy takes damage! damage taken: " << attack << std::endl;
    Enemy::isAlive();

}
