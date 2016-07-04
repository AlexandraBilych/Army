#include "BaseAttack.h"

#define DEBUG 0

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

    } catch ( UnitIsDead& e ) {
        std::cout << enemy.getName() << " is died!" << std::endl;
    }

}

void BaseAttack::counterAttack(Unit& counterAttacker, Unit& enemy) {
    float newHitPoints = (enemy.getState()).getHitPoints() - (counterAttacker.getState()).getDamage()/2;

    (enemy.getState()).takeDamage(newHitPoints);
}

BaseAttack* BaseAttack::instance = NULL;

BaseAttack* BaseAttack::createInstance() {
    if (!instance)
        instance = new BaseAttack();

    if ( DEBUG ) {
        std::cout << "Metod BaseAttack::createInstance(): adress" << instance << std::endl;
    }

    return instance;
}
