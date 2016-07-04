#include "Priest.h"

#define DEBUG 0

Priest::Priest(const std::string& name, float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "Priest::CONSTRUCTOR" << std::endl;
    }

    this->name = name;
    this->state = new SpellcasterState(maxHp, damage, mana);
    this->ability = BaseAttack::createInstance();

    spellBook.insert ( std::pair<std::string, Spell*>("HealthRecovery", HealthRecovery::createSpell()) );
}

void Priest::description() {
    if ( DEBUG ) {
        std::cout << "Priest::description" << std::endl;
    }

    std::cout << "\nHealing mage - " << name << ". I'm priest." << std::endl;
    state->showState();

}

void Priest::castSpell(const std::string& spellName, Unit& enemy) {
    float mana = state->getMana();
    try {
        if ( (spellBook.at(spellName))->getIsCombatSpell() && enemy.getIsUndead() ) {
            (spellBook.at(spellName))->castSpell(*this, enemy);
            state->setMana(mana);
        }

        (spellBook.at(spellName))->castSpell(*this, enemy);
    } catch ( std::out_of_range& e ) {
        std::cout << this->getName() << " don't have spell \"" << spellName << "\" in SpellBook!" << std::endl;
        showSpellBook();
    }
}
