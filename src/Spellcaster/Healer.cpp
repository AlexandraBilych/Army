#include "Healer.h"

#define DEBUG 1

Healer::Healer(const char* name, float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "HEALER::CONSTRUCTOR" << std::endl;
    }

    this->name = name;
    this->state = new HealerState(maxHp, damage, mana);
    this->ability = new BaseAttack();

    spellBook.insert ( std::pair<const char*, Spell*>("HealthRecovery", HealthRecovery::createSpell()) );
}

void Healer::description() {
    if ( DEBUG ) {
        std::cout << "HEALER::description" << std::endl;
    }

    std::cout << "\nHealing mage - " << name << std::endl;
    state->showState();

}
