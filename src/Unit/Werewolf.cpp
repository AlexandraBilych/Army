#include "Werewolf.h"

#define DEBUG 0

Werewolf::Werewolf(const std::string& name, float maxHp, float damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR WOLF" << std::endl;
    }
    this->name = name;
    this->altState = new WolfState(maxHp*2, damage*2);
    this->altAbility = new WolfAbility();
    this->state = new SoldierState(maxHp, damage);
    this->ability = new BaseAttack();
    isWerewolf = true;

}

void Werewolf::description() {
    if ( DEBUG ) {
        std::cout << "Werewolf::description" << std::endl;
    }

    std::cout << "\nMy name is " << name << std::endl;
    state->showState();

}

