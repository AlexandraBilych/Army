#include "SpellcasterState.h"

#define DEBUG 0

SpellcasterState::SpellcasterState(float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "SpellcasterState ::CONSTRUCTOR" << std::endl;
    }

    hitPoints = maxHp;
    hitPointsLimit = maxHp;
    this->damage = damage;
    this->mana = mana;
}

void SpellcasterState::showState() {
    if ( DEBUG ) {
        std::cout << "SpellcasterState ::showState" << std::endl;
    }

    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "Current mana: " << mana << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
