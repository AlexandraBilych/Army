#include "Rogue.h"

#define DEBUG 1

Rogue::Rogue(const char* name, int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR ROGUE" << std::endl;
    }
    this->name = name;
    this->state = new RogueState(maxHp, damage);
    this->ability = new RogueAbility();
}

void Rogue::description() {
    if ( DEBUG ) {
        std::cout << "ROGUE::description" << std::endl;
    }

    std::cout << "\nMy name is " << name << std::endl;
    state->showState();
}
