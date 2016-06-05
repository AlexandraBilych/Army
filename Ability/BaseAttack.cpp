#include "BaseAttack.h"

void BaseAttack::attack(Unit* attacker, Unit* enemy) {
    int newEnemyHitPoint = enemy->getHitPoints() - attacker->getDamage();

    if ( enemy->getHitPoints() == 0 ) {
        throw UnitIsDead();
    }
    if ( newEnemyHitPoint < 0 ) {
        enemy->setHitPoints(0);
    } else {
        enemy->setHitPoints(newEnemyHitPoint);
        counterAttack(enemy, attacker);
    }
}

void BaseAttack::counterAttack(Unit* enemy, Unit* attacker) {
    enemy->ensureIsAlive();
    int newHitPoints = attacker->getHitPoints() - enemy->getDamage()/2;

    if ( newHitPoints < 0 ) {
        attacker->setHitPoints(0);
    } else {
        attacker->setHitPoints(newHitPoints);
    }
}
