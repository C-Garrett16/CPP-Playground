#include "player.h"
#include <iostream>

int Player::hp = 80;

int Player::attackPower = 20;

bool Player::isAlive() {

    if (Player::hp <= 0) {
        std::cout << "Player has lost! Game over!" << std::endl;
        return 0;
    } else {
        return true;
    };
}

int Player::takeDamage(int attack) {
    std::cout << "Player takes damage! Damage taken: " << attack << std::endl;
    return Player::hp -= attack;
}
