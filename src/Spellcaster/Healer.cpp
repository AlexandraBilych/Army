#include "Healer.h"

#define DEBUG 0

Healer::Healer(const std::string& name, float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "HEALER::CONSTRUCTOR" << std::endl;
    }

    this->name = name;
    this->state = new SpellcasterState(maxHp, damage, mana);
    this->ability = BaseAttack::createInstance();

    spellBook.insert ( std::pair<std::string, Spell*>("HealthRecovery", HealthRecovery::createSpell()) );
}

void Healer::description() {
    if ( DEBUG ) {
        std::cout << "HEALER::description" << std::endl;
    }

    std::cout << "\nHealing mage - " << name << ". I'm healer."<< std::endl;
    state->showState();

}
