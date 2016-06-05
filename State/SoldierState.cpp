#include "SoldierState.h"

#define DEBUG 0

SoldierState::SoldierState(int hp, int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR SOLDIER_STATE" << std::endl;
    }
    hitPoints = hp;
    hitPointsLimit = maxHp;
    this->damage = damage;
}

void SoldierState::showState() {
    if ( DEBUG ) {
        std::cout << "SOLDIER_STATE ::showState" << std::endl;
    }

    std::cout << "Damage: " << damage << ". Max hip points: " << hitPointsLimit << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
