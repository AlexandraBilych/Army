#include "Wizard.h"

#define DEBUG 1

Wizard::Wizard(const char* name, int maxHp, int damage, int mana) {
    if ( DEBUG ) {
        std::cout << "WIZARD::CONSTRUCTOR" << std::endl;
    }

    this->name = name;
    this->state = new WizardState(maxHp, damage, mana);
    this->ability = new BaseAttack();
}

void Wizard::description() {
    if ( DEBUG ) {
        std::cout << "WIZARD::description" << std::endl;
    }

    std::cout << isCombatMage << std::endl;
    std::cout << "\nMy name is " << name << std::endl;
    state->showState();

}
