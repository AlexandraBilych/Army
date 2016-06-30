#include "Berserker.h"

#define DEBUG 1

Berserker::Berserker(const std::string& name, float maxHp, float damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR BERSERKER" << std::endl;
    }
    this->name = name;
    this->state = new BerserkerState(maxHp, damage);
    this->ability = new BaseAttack();
}

void Berserker::description() {
    if ( DEBUG ) {
        std::cout << "BERSERKER::description" << std::endl;
    }

    std::cout << "\nMy name is " << Unit::name << std::endl;
    state->showState();
}
