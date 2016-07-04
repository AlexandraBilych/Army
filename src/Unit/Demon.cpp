#include "Demon.h"

#define DEBUG 0

Demon::Demon(const std::string& name, float maxHp, float damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR Demon" << std::endl;
    }
    this->name = name;
    this->state = new SoldierState(maxHp, damage);
    this->ability = BaseAttack::createInstance();

    superAttackIsReady = true;
    isVampire = true;
}

Demon::~Demon(){
    if ( DEBUG ) {
        std::cout << "DECONSTRUCTOR DEMON" << std::endl;
    }

    delete state;

}

void Demon::description() {
    if ( DEBUG ) {
        std::cout << "DEMON::description" << std::endl;
    }

    std::cout << "\nMy name is " << Unit::name << std::endl;
    state->showState();
}

void Demon::superAttack(Unit& enemy) {
    if ( !superAttackIsReady) {
        throw DemonSuperAttackIsUsed();
    }

    state->setDamage(state->getDamage()*2);
    ability->attack(*this, enemy);

    state->setDamage(state->getDamage()/2);
    superAttackIsReady = false;
}
