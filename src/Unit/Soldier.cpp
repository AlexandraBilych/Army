#include "Soldier.h"

#define DEBUG 1

Soldier::Soldier(const char* name, int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR SOLDIER" << std::endl;
    }
    this->name = name;
    this->state = new SoldierState(maxHp, damage);
    this->ability = new BaseAttack();
}

void Soldier::description() {
    if ( DEBUG ) {
        std::cout << "SOLDIER::description" << std::endl;
    }

    std::cout << "\nMy name is " << Unit::name << std::endl;
    state->showState();
}