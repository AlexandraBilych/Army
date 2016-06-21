#include "WizardState.h"

#define DEBUG 1

WizardState::WizardState(int maxHp, int damage, int mana) {
    if ( DEBUG ) {
        std::cout << "WizardState ::CONSTRUCTOR" << std::endl;
    }

    hitPoints = maxHp;
    hitPointsLimit = maxHp;
    this->damage = damage;
    this->mana = mana;
}

void WizardState::showState() {
    if ( DEBUG ) {
        std::cout << "WizardState ::showState" << std::endl;
    }

    std::cout << "I'm wizard." << std::endl;
    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "Current mana: " << mana << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
