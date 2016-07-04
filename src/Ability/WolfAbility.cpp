#include "WolfAbility.h"
#include <typeinfo>

#define DEBUG 0

void WolfAbility::attack(Wolf& attacker, Unit& enemy) {
    if ( DEBUG ) {
        std::cout << "ATTACK WOLF - UNIT" << std::endl;
    }

    try {
        enemy.ensureIsAlive();
        float newEnemyHitPoint = (enemy.getState()).getHitPoints() - (attacker.getState()).getDamage();

        (enemy.getState()).takeDamage(newEnemyHitPoint);

        enemy.ensureIsAlive();
        if ( !(dynamic_cast<Wolf*>(&enemy)->getIsWerewolf()) && !(dynamic_cast<AbstractVampire*>(&enemy)->getIsVampire()) ){
            if ( DEBUG ) {
                std::cout << "CREATE NEW WEREWOLF" << std::endl;
            }

            (dynamic_cast<Wolf&>(enemy)).setIsWerewolf(true);

            (dynamic_cast<Wolf&>(enemy)).setAltState(new WolfState((enemy.getState()).getHitPoints()*2, (enemy.getState()).getHitPointsLimit()*2, (enemy.getState()).getDamage()*2));
            (dynamic_cast<Wolf&>(enemy)).setAltAbility(WolfAbility::createInstance());
        }

        enemy.counterAttack(attacker);
    } catch ( UnitIsDead& e ) {
        std::cout << enemy.getName() << " is died!" << std::endl;
    } catch ( std::bad_cast& e ) {
        std::cout << enemy.getName() << " is protected by transformation into a werewolf!" << std::endl;
    }
}

void WolfAbility::attack(Unit& attacker, Unit& enemy) {
    attack(dynamic_cast<Wolf&>(attacker), enemy);
}

void WolfAbility::counterAttack(Unit& counterAttacker, Unit& enemy) {
    float newHitPoints = (enemy.getState()).getHitPoints() - (counterAttacker.getState()).getDamage()/2;

    (enemy.getState()).takeDamage(newHitPoints);

    try {
        enemy.ensureIsAlive();
        if ( !(dynamic_cast<Wolf&>(enemy).getIsWerewolf()) && !(dynamic_cast<AbstractVampire&>(enemy).getIsVampire()) ){
            if ( DEBUG ) {
                std::cout << "CREATE NEW WEREWOLF" << std::endl;
            }

            (dynamic_cast<Wolf&>(enemy)).setIsWerewolf(true);

            (dynamic_cast<Wolf&>(enemy)).setAltState(new WolfState((enemy.getState()).getHitPoints()*2, (enemy.getState()).getHitPointsLimit()*2, (enemy.getState()).getDamage()*2));
            (dynamic_cast<Wolf&>(enemy)).setAltAbility(WolfAbility::createInstance());
        }
    } catch ( UnitIsDead& e ) {
        std::cout << enemy.getName() << " is died!" << std::endl;
    } catch ( std::bad_cast& e ) {
        std::cout << enemy.getName() << " is protected by transformation into a werewolf!" << std::endl;
    }

}

WolfAbility* WolfAbility::instance = NULL;

WolfAbility* WolfAbility::createInstance() {
    if (!instance)
        instance = new WolfAbility();

    if ( DEBUG ) {
        std::cout << "Metod WolfAbility::createInstance(): adress" << instance << std::endl;
    }

    return instance;
}
