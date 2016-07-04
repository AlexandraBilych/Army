#include "RogueAbility.h"

#define DEBUG 0

void RogueAbility::attack(Unit& attacker, Unit& enemy) {
    if ( DEBUG ) {
        std::cout << "RogueAttack UNIT - UNIT" << std::endl;
    }

    try {
        enemy.ensureIsAlive();
        float newEnemyHitPoint = (enemy.getState()).getHitPoints() - (attacker.getState()).getDamage();

        (enemy.getState()).takeDamage(newEnemyHitPoint);
    } catch ( UnitIsDead& e ) {
        std::cout << enemy.getName() << " is died!" << std::endl;
    }
}

void RogueAbility::counterAttack(Unit& counterAttacker, Unit& enemy) {
    float newHitPoints = (enemy.getState()).getHitPoints() - (counterAttacker.getState()).getDamage()/2;

    (enemy.getState()).takeDamage(newHitPoints);
}

RogueAbility* RogueAbility::instance = NULL;

RogueAbility* RogueAbility::createInstance() {
    if (!instance)
        instance = new RogueAbility();

    if ( DEBUG ) {
        std::cout << "Metod RogueAbility::createInstance(): adress" << instance << std::endl;
    }

    return instance;
}
