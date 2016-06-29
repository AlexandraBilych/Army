#include "WarlockState.h"

#define DEBUG 1

WarlockState::WarlockState(float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "WARLOCK_STATE ::CONSTRUCTOR" << std::endl;
    }

    hitPoints = maxHp;
    hitPointsLimit = maxHp;
    this->damage = damage;
    this->mana = mana;
}

void WarlockState::showState() {
    if ( DEBUG ) {
        std::cout << "WARLOCK_STATE ::showState" << std::endl;
    }

    std::cout << "I'm warlock." << std::endl;
    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "Current mana: " << mana << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
