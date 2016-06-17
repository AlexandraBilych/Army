#include "RogueAbility.h"

#define DEBUG 1

void RogueAbility::attack(Unit* attacker, Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "RogueAttack UNIT - UNIT" << std::endl;
    }

    enemy->ensureIsAlive();
    int newEnemyHitPoint = (enemy->getState())->getHitPoints() - (attacker->getState())->getDamage();

    (enemy->getState())->takeDamage(newEnemyHitPoint);
}

void RogueAbility::counterAttack(Unit* counterAttacker, Unit* enemy) {
    std::cout << "RogueAbility COUNTER_ATTACK" << std::endl;
    int newHitPoints = (enemy->getState())->getHitPoints() - (counterAttacker->getState())->getDamage()/2;

    (enemy->getState())->takeDamage(newHitPoints);
}
