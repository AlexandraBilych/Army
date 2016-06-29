#include "SummonDemon.h"

#define DEBUG 1

SummonDemon::SummonDemon () {
    spellName = "SummonDemon";
    isCombatSpell = true;
}

Demon* SummonDemon::spell(Spellcaster* attacker, const char* demonName) {
    if ( DEBUG ) {
        std::cout << "Demon* SummonDemon Spellcaster" << std::endl;
    }

    (attacker->getState())->checkMana(this->cost);

    float newMana = (attacker->getState())->getMana() - cost;

    (attacker->getState())->setMana(newMana);

    return new Demon(demonName);
}

void SummonDemon::description() const {
    std::cout << "Spell cost: " << this->cost << std::endl;
}

SummonDemon* SummonDemon::instance = NULL;
const float SummonDemon::cost = 20;

SummonDemon* SummonDemon::createSpell() {
    if (!instance)
        instance = new SummonDemon();

    return instance;
}
