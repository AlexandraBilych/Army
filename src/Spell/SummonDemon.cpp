#include "SummonDemon.h"

#define DEBUG 1

SummonDemon::SummonDemon () {
    spellName = "SummonDemon";
    isCombatSpell = true;
}

void SummonDemon::spell(Spellcaster* attacker, Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "SummonDemon Spellcaster - UNIT" << std::endl;
    }
    // (attacker->getState())->checkMana(this->cost);
    // enemy->ensureIsAlive();

    // int newMana = (attacker->getState())->getMana() - cost;



    // (attacker->getState())->setMana(newMana);
}

Demon* SummonDemon::spell(Spellcaster* attacker, const char* demonName) {
    if ( DEBUG ) {
        std::cout << "Demon* SummonDemon Spellcaster" << std::endl;
    }

    (attacker->getState())->checkMana(this->cost);

    int newMana = (attacker->getState())->getMana() - cost;

    (attacker->getState())->setMana(newMana);

    return new Demon(demonName);
}

void SummonDemon::description() const {
    std::cout << "Spell cost: " << this->cost << std::endl;
}

SummonDemon* SummonDemon::instance = NULL;

SummonDemon* SummonDemon::createSpell() {
    if (!instance)
        instance = new SummonDemon();

    return instance;
}
