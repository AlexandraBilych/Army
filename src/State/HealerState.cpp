#include "HealerState.h"

#define DEBUG 1

HealerState::HealerState(int maxHp, int damage, int mana) {
    if ( DEBUG ) {
        std::cout << "HealerState ::CONSTRUCTOR" << std::endl;
    }

    hitPoints = maxHp;
    hitPointsLimit = maxHp;
    this->damage = damage;
    this->mana = mana;
}

void HealerState::showState() {
    if ( DEBUG ) {
        std::cout << "HealerState ::showState" << std::endl;
    }

    std::cout << "I'm healer." << std::endl;
    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "Current mana: " << mana << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
