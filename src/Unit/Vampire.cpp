#include "Vampire.h"

#define DEBUG 1

Vampire::Vampire(const std::string& name, float maxHp, float damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR VAMPIRE" << std::endl;
    }
    this->name = name;
    this->state = new VampireState(maxHp, damage);
    this->ability = new VampireAbility();

    isVampire = true;
    isUndead = true;
}

void Vampire::description() {
    if ( DEBUG ) {
        std::cout << "Vampire::description" << std::endl;
    }

    std::cout << "\nMy name is " << name << std::endl;
    state->showState();

}

