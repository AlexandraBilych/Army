#include "RogueState.h"

#define DEBUG 0

RogueState::RogueState(float maxHp, float damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR ROGUE_STATE" << std::endl;
    }
    hitPoints = maxHp;
    hitPointsLimit = maxHp;
    this->damage = damage;
}

void RogueState::showState() {
    if ( DEBUG ) {
        std::cout << "ROGUE_STATE ::showState" << std::endl;
    }

    std::cout << "I'm a Rogue." << std::endl;
    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
