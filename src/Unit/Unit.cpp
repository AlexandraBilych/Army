#include "Unit.h"

#define DEBUG 1

Unit::Unit() {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR UNIT" << std::endl;
    }

    isUndead = false;
}

const char* Unit::getName() const {
    return name;
}

State* Unit::getState() const {
    return state;
}

Ability* Unit::getAbility() const {
    return ability;
}

bool Unit::getIsUndead() const {
    return isUndead;
}

void Unit::setState(State* value) {
    state = value;
}

void Unit::setAbility(Ability* value) {
    ability = value;
}

void Unit::setIsUndead(bool value) {
    isUndead = value;
}

void Unit::attack(Unit* enemy) {
    std::cout << "UNIT ATTACK" << std::endl;
    ability->attack(this, enemy);
}

void Unit::counterAttack(Unit* enemy) {
    std::cout << "UNIT COUNTER_ATTACK" << std::endl;
    ability->counterAttack(this, enemy);
}

void Unit::ensureIsAlive() {
    if ( state->getHitPoints() == 0 ) {
        throw UnitIsDead();
    }
}
