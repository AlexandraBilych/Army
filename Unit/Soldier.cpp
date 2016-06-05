#include "Soldier.h"
#define DEBUG 0

Soldier::Soldier(const char* name, int hp, int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR SOLDIER" << std::endl;
    }
    this->name = name;
    this->state = new SoldierState(hp, maxHp, damage);
    this->ability = new BaseAttack();
}

void Soldier::description() {
    if ( DEBUG ) {
        std::cout << "SOLDIER::description" << std::endl;
    }
    std::cout << "I'm a Soldier. My name is " << name << std::endl;
    std::cout << "State: " << std::endl;
    state->showState();
}
