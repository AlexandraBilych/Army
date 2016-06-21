#include "BaseAttack.h"

#define DEBUG 1

void BaseAttack::attack(Unit* attacker, Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "BASEATTACK UNIT - UNIT" << std::endl;
    }

    enemy->ensureIsAlive();
    int newEnemyHitPoint = (enemy->getState())->getHitPoints() - (attacker->getState())->getDamage();

    (enemy->getState())->takeDamage(newEnemyHitPoint);

    enemy->ensureIsAlive();
    enemy->counterAttack(attacker);
}

void BaseAttack::counterAttack(Unit* counterAttacker, Unit* enemy) {
    std::cout << "BASEATTACK COUNTER_ATTACK" << std::endl;
    int newHitPoints = (enemy->getState())->getHitPoints() - (counterAttacker->getState())->getDamage()/2;

    (enemy->getState())->takeDamage(newHitPoints);
}

