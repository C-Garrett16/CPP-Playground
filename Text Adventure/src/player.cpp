#include "player.h"
#include <iostream>

int Player::hp = 80;

int Player::attackPower = 20;

bool Player::isAlive() {

    if (Player::hp <= 0) {
        return false;
    } else {
        return true;
    };
}

void Player::takeDamage(int attack) {
    Player::hp = std::max(0, hp - attack);
    Player::isAlive();
}
