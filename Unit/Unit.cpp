#include "Unit.h"

#define DEBUG 1

Unit::Unit() {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR UNIT" << std::endl;
    }
}

const char* Unit::getName() const {
    return name;
}

State* Unit::getState() const {
    return state;
}

void Unit::attack(Unit* enemy) {
    std::cout << "UNIT ATTACK" << std::endl;
    ability->attack(this, enemy);
}

void Unit::ensureIsAlive() {
    if ( state->getHitPoints() == 0 ) {
        throw UnitIsDead();
    }
}
