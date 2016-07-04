#include "Warlock.h"

#define DEBUG 0

Warlock::Warlock(const std::string& name, float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "WARLOCK::CONSTRUCTOR" << std::endl;
    }

    isCombatMage = true;
    this->name = name;
    this->state = new SpellcasterState(maxHp, damage, mana);
    this->ability = BaseAttack::createInstance();

    spellBook.insert ( std::pair<std::string, Spell*>("SummonDemon", SummonDemon::createSpell()) );
}

void Warlock::description() {
    if ( DEBUG ) {
        std::cout << "WARLOCK::description" << std::endl;
    }

    std::cout << "\nCombat mage - " << name << ". I'm warlock." << std::endl;
    state->showState();

}

Demon* Warlock::castSpell(const std::string& spellName, const std::string& demonName) {
    if ( DEBUG ) {
        std::cout << "WARLOCK::SPELL SUMONDEMON" << std::endl;
    }
    if ( spellName != "SummonDemon" ) {
        throw InvalidParameters();
    }
    return (dynamic_cast<SummonDemon*>(spellBook.at(spellName)))->castSpell(*this, demonName);
}
