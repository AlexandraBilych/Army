#include "NecromancerState.h"

#define DEBUG 1

NecromancerState::NecromancerState(float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "NecromancerState ::CONSTRUCTOR" << std::endl;
    }

    hitPoints = maxHp;
    hitPointsLimit = maxHp;
    this->damage = damage;
    this->mana = mana;
}

void NecromancerState::showState() {
    if ( DEBUG ) {
        std::cout << "NecromancerState ::showState" << std::endl;
    }

    std::cout << "I'm Necromancer." << std::endl;
    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "Current mana: " << mana << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
