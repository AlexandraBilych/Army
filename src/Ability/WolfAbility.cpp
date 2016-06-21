#include "WolfAbility.h"
#include <typeinfo>

#define DEBUG 1

void WolfAbility::attack(Wolf* attacker, Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "ATTACK WOLF - UNIT" << std::endl;
    }

    enemy->ensureIsAlive();
    int newEnemyHitPoint = (enemy->getState())->getHitPoints() - (attacker->getState())->getDamage();

    (enemy->getState())->takeDamage(newEnemyHitPoint);

    enemy->ensureIsAlive();
    if ( !(dynamic_cast<Wolf*>(enemy)->getIsWerewolf()) && !(dynamic_cast<AbstractVampire*>(enemy)->getIsVampire()) ){
        if ( DEBUG ) {
            std::cout << "CREATE NEW WEREWOLF" << std::endl;
        }

        (dynamic_cast<Wolf*>(enemy))->setIsWerewolf(true);

        (dynamic_cast<Wolf*>(enemy))->setAltState(new WolfState((enemy->getState())->getHitPoints()*2, (enemy->getState())->getHitPointsLimit()*2, (enemy->getState())->getDamage()*2));
        (dynamic_cast<Wolf*>(enemy))->setAltAbility(new WolfAbility());
    }

    enemy->counterAttack(attacker);
}

void WolfAbility::attack(Unit* attacker, Unit* enemy) {
    attack(dynamic_cast<Wolf*>(attacker), enemy);
}

void WolfAbility::counterAttack(Unit* counterAttacker, Unit* enemy) {
    std::cout << "WolfAbility WOLF_counterATTACK" << std::endl;
    int newHitPoints = (enemy->getState())->getHitPoints() - (counterAttacker->getState())->getDamage()/2;

    (enemy->getState())->takeDamage(newHitPoints);

    enemy->ensureIsAlive();
    if ( !(dynamic_cast<Wolf*>(enemy)->getIsWerewolf()) && !(dynamic_cast<AbstractVampire*>(enemy)->getIsVampire()) ){
        if ( DEBUG ) {
            std::cout << "CREATE NEW WEREWOLF" << std::endl;
        }

        (dynamic_cast<Wolf*>(enemy))->setIsWerewolf(true);

        (dynamic_cast<Wolf*>(enemy))->setAltState(new WolfState((enemy->getState())->getHitPoints()*2, (enemy->getState())->getHitPointsLimit()*2, (enemy->getState())->getDamage()*2));
        (dynamic_cast<Wolf*>(enemy))->setAltAbility(new WolfAbility());
    }

}
