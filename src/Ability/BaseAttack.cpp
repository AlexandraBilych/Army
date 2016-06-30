#include "BaseAttack.h"

#define DEBUG 1

void BaseAttack::attack(Unit& attacker, Unit& enemy) {
    if ( DEBUG ) {
        std::cout << "BASEATTACK UNIT - UNIT" << std::endl;
    }

    try {
        enemy.ensureIsAlive();

        float newEnemyHitPoint = (enemy.getState()).getHitPoints() - (attacker.getState()).getDamage();

        (enemy.getState()).takeDamage(newEnemyHitPoint);
        enemy.ensureIsAlive();
        enemy.counterAttack(attacker);

    } catch ( UnitIsDead e ) {
        std::cout << enemy.getName() << " is died!" << std::endl;
    }

}

void BaseAttack::counterAttack(Unit& counterAttacker, Unit& enemy) {
    std::cout << "BASEATTACK COUNTER_ATTACK" << std::endl;
    float newHitPoints = (enemy.getState()).getHitPoints() - (counterAttacker.getState()).getDamage()/2;

    (enemy.getState()).takeDamage(newHitPoints);
}

