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

int Unit::getDamage() const {
    return state->getDamage();
}

int Unit::getHitPoints() const {
    return state->getHitPoints();
}

int Unit::getHitPointsLimit() const {
    return state->getHitPointsLimit();
}

void Unit::setDamage(int value) {
    state->setDamage(value);
}

void Unit::setHitPoints(int value) {
    state->setHitPoints(value);
}

void Unit::setHitPointsLimit(int value) {
    state->setHitPointsLimit(value);
}

void Unit::attack(Unit* enemy) {
    ability->attack(this, enemy);
}

void Unit::ensureIsAlive() {
    if ( state->getHitPoints() == 0 ) {
        throw UnitIsDead();
    }
}
