#include "State.h"

#define DEBUG 0

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

int State::getMana() const {
    return mana;
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

void State::setMana(int value) {
    mana = value;
}

void State::takeDamage(int value) {
    if ( value < 0 ) {
        hitPoints = 0;
    } else {
        hitPoints = value;
    }
}
