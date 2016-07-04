#include "Soldier.h"

#define DEBUG 0

Soldier::Soldier(const std::string& name, float maxHp, float damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR SOLDIER" << std::endl;
    }
    this->name = name;
    this->state = new SoldierState(maxHp, damage);
    this->ability = BaseAttack::createInstance();

}

Soldier::~Soldier() {
    if ( DEBUG ) {
        std::cout << "DECONSTRUCTOR SOLDIER" << std::endl;
    }

    delete state;
}

void Soldier::description() {
    if ( DEBUG ) {
        std::cout << "SOLDIER::description" << std::endl;
    }

    std::cout << "\nMy name is " << Unit::name << std::endl;
    state->showState();
}
