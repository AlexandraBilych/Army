#include "WolfState.h"

#define DEBUG 0

WolfState::WolfState(int hp, int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR Wolf_STATE" << std::endl;
    }
    hitPoints = hp;
    hitPointsLimit = maxHp;
    this->damage = damage;
}

WolfState::WolfState(int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR Wolf_STATE" << std::endl;
    }
    hitPoints = maxHp;
    hitPointsLimit = maxHp;
    this->damage = damage;
}

void WolfState::showState() {
    if ( DEBUG ) {
        std::cout << "Wolf_STATE ::showState" << std::endl;
    }

    std::cout << "I'm wolf." << std::endl;
    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
