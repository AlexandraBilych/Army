#include "Priest.h"

#define DEBUG 1

Priest::Priest(const char* name, float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "Priest::CONSTRUCTOR" << std::endl;
    }

    this->name = name;
    this->state = new PriestState(maxHp, damage, mana);
    this->ability = new BaseAttack();

    spellBook.insert ( std::pair<const char*, Spell*>("HealthRecovery", HealthRecovery::createSpell()) );
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

    float mana = state->getMana();

    if ( (spellBook.at(spellName))->getIsCombatSpell() && enemy->getIsUndead() ) {
        (spellBook.at(spellName))->spell(this, enemy);
        state->setMana(mana);
    }

    (spellBook.at(spellName))->spell(this, enemy);
}
