#include "Werewolf.h"

#define DEBUG 0

Werewolf::Werewolf(const char* name, int hp, int maxHp, int damage) {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR WOLF" << std::endl;
    }
    this->name = name;
    this->altState = new WolfState(hp*2, maxHp*2, damage*2);
    this->altAbility = new WolfAbility();
    this->state = new SoldierState(hp, maxHp, damage);
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

