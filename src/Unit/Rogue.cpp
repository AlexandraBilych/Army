#include "Rogue.h"

#define DEBUG 0

Rogue::Rogue(const std::string& name, float maxHp, float damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR ROGUE" << std::endl;
    }
    this->name = name;
    this->state = new RogueState(maxHp, damage);
    this->ability = RogueAbility::createInstance();
}

Rogue::~Rogue() {
    if ( DEBUG ) {
        std::cout << "DECONSTRUCTOR ROGUE" << std::endl;
    }

    delete state;
}

void Rogue::description() {
    if ( DEBUG ) {
        std::cout << "ROGUE::description" << std::endl;
    }

    std::cout << "\nMy name is " << name << std::endl;
    state->showState();
}
