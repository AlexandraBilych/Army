#include "Demon.h"

#define DEBUG 1

Demon::Demon(const char* name, int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR Demon" << std::endl;
    }
    this->name = name;
    this->state = new SoldierState(maxHp, damage);
    this->ability = new BaseAttack();

    superAttackIsReady = true;
    isVampire = true;
}

void Demon::description() {
    if ( DEBUG ) {
        std::cout << "DEMON::description" << std::endl;
    }

    std::cout << "\nMy name is " << Unit::name << std::endl;
    state->showState();
}

void Demon::superAttack(Unit* enemy) {
    std::cout << "Demon magicAttack" << std::endl;

    if ( !superAttackIsReady) {
        throw DemonSuperAttackIsUsed();
    }

    state->setDamage(state->getDamage()*2);
    ability->attack(this, enemy);

    state->setDamage(state->getDamage()/2);
    superAttackIsReady = false;
}
