#include "BaseAttack.h"

#define DEBUG 1

void BaseAttack::attack(Unit* attacker, Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "BASEATTACK UNIT - UNIT" << std::endl;
    }
    int newEnemyHitPoint = (enemy->getState())->getHitPoints() - (attacker->getState())->getDamage();

    if ( (enemy->getState())->getHitPoints() == 0 ) {
        throw UnitIsDead();
    }
    if ( newEnemyHitPoint < 0 ) {
        (enemy->getState())->setHitPoints(0);
    } else {
        (enemy->getState())->setHitPoints(newEnemyHitPoint);
        counterAttack(enemy, attacker);
    }
}

void BaseAttack::counterAttack(Unit* enemy, Unit* attacker) {
    enemy->ensureIsAlive();
    int newHitPoints = (attacker->getState())->getHitPoints() - (enemy->getState())->getDamage()/2;

    if ( newHitPoints < 0 ) {
        (attacker->getState())->setHitPoints(0);
    } else {
        (attacker->getState())->setHitPoints(newHitPoints);
    }
}
