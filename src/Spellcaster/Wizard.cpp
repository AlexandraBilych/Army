#include "Wizard.h"

#define DEBUG 0

Wizard::Wizard(const std::string& name, float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "WIZARD::CONSTRUCTOR" << std::endl;
    }

    isCombatMage = true;
    this->name = name;
    this->state = new SpellcasterState(maxHp, damage, mana);
    this->ability = BaseAttack::createInstance();

    spellBook.insert ( std::pair<std::string, Spell*>("Cruciatus", Cruciatus::createSpell()));
}

void Wizard::description() {
    if ( DEBUG ) {
        std::cout << "WIZARD::description" << std::endl;
    }

    std::cout << "\nCombat mage - " << name << ". I'm wizard." << std::endl;
    state->showState();

}
