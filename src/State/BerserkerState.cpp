#include "BerserkerState.h"

#define DEBUG 0

BerserkerState::BerserkerState(float maxHp, float damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR BERSERKER_STATE" << std::endl;
    }
    hitPoints = maxHp;
    hitPointsLimit = maxHp;
    this->damage = damage;
}

void BerserkerState::showState() {
    if ( DEBUG ) {
        std::cout << "BERSERKER_STATE ::showState" << std::endl;
    }

    std::cout << "I'm a Berserker." << std::endl;
    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}

void BerserkerState::takeMagicDamage(float value) {
    std::cout << "Berserker has immune to a magic!" << std::endl;
}
