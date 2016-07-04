#include "Unit.h"

#define DEBUG 0

Unit::Unit() {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR UNIT" << std::endl;
    }

    isUndead = false;
}

const std::string& Unit::getName() const {
    return name;
}

State& Unit::getState() const {
    return *state;
}

Ability& Unit::getAbility() const {
    return *ability;
}

bool Unit::getIsUndead() const {
    return isUndead;
}

Unit& Unit::getMaster() const {
    return *master;
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

void Unit::setMaster(Unit* master) {
    this->master = master;
}

void Unit::attack(Unit& enemy) {
    ability->attack(*this, enemy);
}

void Unit::counterAttack(Unit& enemy) {
    ability->counterAttack(*this, enemy);
}

void Unit::ensureIsAlive() {
    if ( state->getHitPoints() == 0 ) {
        if ( master ) {
            (master->state)->recoveryHP(state->getHitPointsLimit()*0.1);
        }
        master = NULL;

        throw UnitIsDead();
    }
}
