#include "State.h"

#define DEBUG 0

State::State() {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR STATE" << std::endl;
    }
}

float State::getHitPoints() const {
    return hitPoints;
}

float State::getHitPointsLimit() const {
    return hitPointsLimit;
}

float State::getDamage() const {
    return damage;
}

float State::getMana() const {
    return mana;
}

void State::setHitPoints(float value) {
    hitPoints = value;
}

void State::recoveryHP(float value) {
    if ( value + hitPoints > hitPointsLimit ) {
        hitPoints = hitPointsLimit;
    } else {
        hitPoints += value;
    }
}

void State::setHitPointsLimit(float value) {
    hitPointsLimit = value;
}

void State::setDamage(float value) {
    damage = value;
}

void State::setMana(float value) {
    mana = value;
}

void State::checkMana(float value) {
    if ( mana < value ) {
        throw ManaIsNotEnough();
    }
}

void State::takeDamage(float value) {
    if ( value < 0 ) {
        hitPoints = 0;
    } else {
        hitPoints = value;
    }
}

void State::takeMagicDamage(float value) {
    if ( hitPoints < value ) {
        hitPoints = 0;
    } else {
        hitPoints -= value;
    }
}
