#include "VampireAbility.h"
#include <typeinfo>

#define DEBUG 0

void VampireAbility::attack(AbstractVampire& attacker, Unit& enemy) {
    if ( DEBUG ) {
        std::cout << "ATTACK VAMPIRE - UNIT" << std::endl;
    }

    try {

        enemy.ensureIsAlive();
        float newEnemyHitPoint = (enemy.getState()).getHitPoints() - (attacker.getState()).getDamage();

        if ( newEnemyHitPoint < 0 ) {
            (attacker.getState()).setHitPoints((enemy.getState()).getHitPoints());
        } else {
            (attacker.getState()).setHitPoints((attacker.getState()).getDamage()/2);
        }

        (enemy.getState()).takeDamage(newEnemyHitPoint);

        enemy.ensureIsAlive();
        if ( !(dynamic_cast<Wolf&>(enemy).getIsWerewolf()) && !(dynamic_cast<AbstractVampire&>(enemy).getIsVampire()) ) {
            if ( DEBUG ) {
                std::cout << "CREATE NEW VAMPIRE" << std::endl;
            }

            (dynamic_cast<AbstractVampire&>(enemy)).setIsVampire(true);
            (dynamic_cast<AbstractVampire&>(enemy)).setIsUndead(true);

            (dynamic_cast<AbstractVampire&>(enemy)).setState(new VampireState((enemy.getState()).getHitPoints(), (enemy.getState()).getHitPointsLimit(), (enemy.getState()).getDamage()));
            (dynamic_cast<AbstractVampire&>(enemy)).setAbility(VampireAbility::createInstance());
        }

        enemy.counterAttack(attacker);
    } catch ( UnitIsDead& e ) {
        std::cout << enemy.getName() << " is died!" << std::endl;
    } catch ( std::bad_cast& e ) {
        std::cout << enemy.getName() << " is protected by transformation into a vampire!" << std::endl;
    }
}

void VampireAbility::attack(Unit& attacker, Unit& enemy) {
    attack(dynamic_cast<AbstractVampire&>(attacker), enemy);
}


void VampireAbility::counterAttack(Unit& counterAttacker, Unit& enemy) {
    float newHitPoints = (enemy.getState()).getHitPoints() - (counterAttacker.getState()).getDamage()/2;

    if ( newHitPoints < 0 ) {
        (counterAttacker.getState()).setHitPoints((enemy.getState()).getHitPoints());
    } else {
        (counterAttacker.getState()).setHitPoints((counterAttacker.getState()).getDamage()/2);
    }

    (enemy.getState()).takeDamage(newHitPoints);

    try {
    enemy.ensureIsAlive();
        if ( !(dynamic_cast<Wolf&>(enemy).getIsWerewolf()) && !(dynamic_cast<AbstractVampire&>(enemy).getIsVampire()) ) {
            if ( DEBUG ) {
                std::cout << "CREATE NEW VAMPIRE" << std::endl;
            }

            (dynamic_cast<AbstractVampire&>(enemy)).setIsVampire(true);
            (dynamic_cast<AbstractVampire&>(enemy)).setIsUndead(true);

            (dynamic_cast<AbstractVampire&>(enemy)).setState(new VampireState((enemy.getState()).getHitPoints(), (enemy.getState()).getHitPointsLimit(), (enemy.getState()).getDamage()));
            (dynamic_cast<AbstractVampire&>(enemy)).setAbility(VampireAbility::createInstance());
        }
    } catch ( UnitIsDead& e ) {
        std::cout << enemy.getName() << " is died!" << std::endl;
    }  catch ( std::bad_cast& e ) {
        std::cout << enemy.getName() << " is protected by transformation into a vampire!" << std::endl;
    }
}

VampireAbility* VampireAbility::instance = NULL;

VampireAbility* VampireAbility::createInstance() {
    if (!instance)
        instance = new VampireAbility();

    if ( DEBUG ) {
        std::cout << "Metod VampireAbility::createInstance(): adress" << instance << std::endl;
    }

    return instance;
}
