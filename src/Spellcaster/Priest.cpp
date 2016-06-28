#include "Priest.h"

#define DEBUG 1

Priest::Priest(const char* name, int maxHp, int damage, int mana) {
    if ( DEBUG ) {
        std::cout << "Priest::CONSTRUCTOR" << std::endl;
    }

    this->name = name;
    this->state = new PriestState(maxHp, damage, mana);
    this->ability = new BaseAttack();

    spellBook.insert ( std::pair<std::string, Spell*>("Cruciatus", Cruciatus::createSpell()));
}

void Priest::description() {
    if ( DEBUG ) {
        std::cout << "Priest::description" << std::endl;
    }

    std::cout << "\nHealing mage - " << name << std::endl;
    state->showState();

}

void Priest::spell(std::string spellName, Unit* enemy) {
    std::cout << "Priest SPELL" << std::endl;

    int mana = state->getMana();

    if ( (spellBook.at(spellName))->getIsCombatSpell() && enemy->getIsUndead() ) {
        (spellBook.at(spellName))->spell(this, enemy);
        state->setMana(mana);
    }

    (spellBook.at(spellName))->spell(this, enemy);
}
