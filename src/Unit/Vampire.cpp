#include "Vampire.h"

#define DEBUG 1

Vampire::Vampire(const char* name, int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR VAMPIRE" << std::endl;
    }
    this->name = name;
    this->state = new VampireState(maxHp, damage);
    this->ability = new VampireAbility();
    isVampire = true;
}

void Vampire::description() {
    if ( DEBUG ) {
        std::cout << "Vampire::description" << std::endl;
    }

    std::cout << "\nMy name is " << name << std::endl;
    state->showState();

}

