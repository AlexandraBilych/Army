#include "Cruciatus.h"

#define DEBUG 1

Cruciatus::Cruciatus () {
    spellName = "Cruciatus";
    isCombatSpell = true;
}

void Cruciatus::spell(Spellcaster* attacker, Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "Cruciatus UNIT - UNIT" << std::endl;
    }
    (attacker->getState())->checkMana(this->cost);
    enemy->ensureIsAlive();

    int newMana = (attacker->getState())->getMana() - cost;

    if ( attacker->getIsCombatMage() ) {
        (enemy->getState())->takeMagicDamage(magicDamage);
    } else {
        (enemy->getState())->takeMagicDamage(magicDamage/2);
    }

    (attacker->getState())->setMana(newMana);
}

void Cruciatus::description() const {
    std::cout << "Magic damage: " << this->magicDamage << "; Spell cost: " << this->cost << std::endl;
}

Cruciatus* Cruciatus::instance = NULL;

Cruciatus* Cruciatus::createSpell() {
    if (!instance)
        instance = new Cruciatus();

    return instance;
}
