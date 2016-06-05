#include "State.h"

#define DEBUG 1

State::State() {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR STATE" << std::endl;
    }
}

int State::getHitPoints() const {
    return hitPoints;
}

int State::getHitPointsLimit() const {
    return hitPointsLimit;
}

int State::getDamage() const {
    return damage;
}

void State::setHitPoints(int value) {
    hitPoints = value;
}

void State::setHitPointsLimit(int value) {
    hitPointsLimit = value;
}

void State::setDamage(int value) {
    damage = value;
}
