#include "Wolf.h"

#define DEBUG 1

Wolf::Wolf() {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR Wolf" << std::endl;
    }
    isWerewolf = false;
}

void Wolf::attack(Wolf* enemy) {
    ability->attack(this, enemy);
}

bool Wolf::getIsWerewolf() const {
    return isWerewolf;
}

State* Wolf::getAltState() const {
    return altState;
}

Ability* Wolf::getAltAbility() const {
    return altAbility;
}

void Wolf::setIsWerewolf(bool value) {
    isWerewolf = value;
}

void Wolf::setAltAbility(Ability* value) {
    altAbility = value;
}

void Wolf::setAltState(State* value) {
    altState = value;
}

void Wolf::transform() {
    if ( isWerewolf ) {
        int newAltHitPoints = getState()->getHitPoints()*getAltState()->getHitPointsLimit()/getState()->getHitPointsLimit();
        Ability* tempAbility = altAbility;
        State* tempState = altState;

        (getAltState())->setHitPoints(newAltHitPoints);

        altAbility = ability;
        ability = tempAbility;

        altState = state;
        state = tempState;
    }

}
