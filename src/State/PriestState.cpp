#include "PriestState.h"

#define DEBUG 1

PriestState::PriestState(float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "PriestState ::CONSTRUCTOR" << std::endl;
    }

    hitPoints = maxHp;
    hitPointsLimit = maxHp;
    this->damage = damage;
    this->mana = mana;
}

void PriestState::showState() {
    if ( DEBUG ) {
        std::cout << "PriestState ::showState" << std::endl;
    }

    std::cout << "I'm priest." << std::endl;
    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "Current mana: " << mana << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
