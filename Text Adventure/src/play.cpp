#include <iostream>
#include "enemy.h"
#include "player.h"

void whoWon() {
    if (!Enemy::isAlive()) {
        std::cout << "Player has won!" << std::endl;
    } else {
        std::cout << "Enemy has won! Try again!" << std::endl;
    }
}

int main () {
    while (Player::isAlive() && Enemy::isAlive()) {
        std::cout << "Player attacks enemy!" << std::endl;
        Enemy::takeDamage(Player::attackPower);

        std::cout << "Enemy attacks Player!" << std::endl;
        Player::takeDamage(Enemy::attackPower);

        std::cout << "Current HP Enemy: " << Enemy::hp << " Player: " << Player::hp << std::endl;

    }

    whoWon();

}
