#include "Wizard.h"

#define DEBUG 1

Wizard::Wizard(const char* name, int maxHp, int damage, int mana) {
    if ( DEBUG ) {
        std::cout << "WIZARD::CONSTRUCTOR" << std::endl;
    }

    isCombatMage = true;
    this->name = name;
    this->state = new WizardState(maxHp, damage, mana);
    this->ability = new BaseAttack();

    spellBook.insert ( std::pair<std::string, Spell*>("Cruciatus", Cruciatus::createSpell()));
}

void Wizard::description() {
    if ( DEBUG ) {
        std::cout << "WIZARD::description" << std::endl;
    }

    std::cout << "\nHealing mage - " << name << std::endl;
    state->showState();

}
