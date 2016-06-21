#include "VampireState.h"

#define DEBUG 1

VampireState::VampireState(int hp, int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR VAMPIRE_STATE" << std::endl;
    }
    hitPoints = hp;
    hitPointsLimit = maxHp;
    this->damage = damage;
}

VampireState::VampireState(int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR VAMPIRE_STATE" << std::endl;
    }
    hitPoints = maxHp;
    hitPointsLimit = maxHp;
    this->damage = damage;
}

void VampireState::setHitPoints(int value) {
    value += hitPoints;

        if ( value > hitPointsLimit ) {
    hitPoints = hitPointsLimit;
    } else {
        hitPoints = value;
    }
}

void VampireState::showState() {
    if ( DEBUG ) {
        std::cout << "VampireState ::showState" << std::endl;
    }

    std::cout << "I'm vampire." << std::endl;
    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
