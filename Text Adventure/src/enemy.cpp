#include "enemy.h"
#include <iostream>

int Enemy::hp = 1000;

int Enemy::attackPower = 10;

bool Enemy::isAlive() {

    if (Enemy::hp <= 0) {
        return false;
        // exit
    } else {
        return true;
        // keep playing
    }
}

void Enemy::takeDamage(int attack) {
    Enemy::hp -= attack;
    Enemy::isAlive();

}
