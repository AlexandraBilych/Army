#include "Berserker.h"

#define DEBUG 0

Berserker::Berserker(const std::string& name, float maxHp, float damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR BERSERKER" << std::endl;
    }
    this->name = name;
    this->state = new BerserkerState(maxHp, damage);
    this->ability = BaseAttack::createInstance();
}

Berserker::~Berserker() {
    if ( DEBUG ) {
        std::cout << "DECONSTRUCTOR BERSERKER" << std::endl;
    }

    delete state;
}

void Berserker::description() {
    if ( DEBUG ) {
        std::cout << "BERSERKER::description" << std::endl;
    }

    std::cout << "\nMy name is " << Unit::name << std::endl;
    state->showState();
}
