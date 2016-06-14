#include "WolfAbility.h"
#include <typeinfo>

#define DEBUG 1

void WolfAbility::attack(Wolf* attacker, Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "ATTACK WOLF - UNIT" << std::endl;
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

    if ( !((Wolf*)enemy)->getIsWerewolf() ) {
        if ( DEBUG ) {
            std::cout << "CREATE NEW WEREWOLF" << std::endl;
        }

        ((Wolf*)enemy)->setIsWerewolf(true);

        ((Wolf*)enemy)->setAltState(new WolfState((enemy->getState())->getHitPoints()*2, (enemy->getState())->getHitPointsLimit()*2, (enemy->getState())->getDamage()*2));
        ((Wolf*)enemy)->setAltAbility(new WolfAbility());
    }
}

void WolfAbility::attack(Unit* attacker, Unit* enemy) {
    attack((Wolf*)attacker, enemy);
}

void WolfAbility::counterAttack(Unit* enemy, Wolf* attacker) {
    enemy->ensureIsAlive();

    int newHitPoints = (attacker->getState())->getHitPoints() - (enemy->getState())->getDamage()/2;

    if ( newHitPoints < 0 ) {
        (attacker->getState())->setHitPoints(0);
    } else {
        (attacker->getState())->setHitPoints(newHitPoints);
    }
}
