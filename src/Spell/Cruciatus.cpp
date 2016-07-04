
#include "Cruciatus.h"

#define DEBUG 0

Cruciatus::Cruciatus () {
    spellName = "Cruciatus";
    isCombatSpell = true;
}

void Cruciatus::castSpell(Spellcaster& attacker, Unit& enemy) {
    if ( DEBUG ) {
        std::cout << "Cruciatus UNIT - UNIT" << std::endl;
    }
    try {
        (attacker.getState()).checkMana(this->cost);
        enemy.ensureIsAlive();

        float newMana = (attacker.getState()).getMana() - cost;

        if ( attacker.getIsCombatMage() ) {
            (enemy.getState()).takeMagicDamage(magicDamage);
        } else {
            (enemy.getState()).takeMagicDamage(magicDamage/2);
        }

        (attacker.getState()).setMana(newMana);
    } catch ( UnitIsDead& e ) {
        std::cout << enemy.getName() << " is died!" << std::endl;
    }
}

void Cruciatus::description() const {
    std::cout << "Magic damage: " << this->magicDamage << "; Spell cost: " << this->cost << std::endl;
}

Cruciatus* Cruciatus::instance = NULL;
const float Cruciatus::cost = 10;
const float Cruciatus::magicDamage = 20;

Cruciatus* Cruciatus::createSpell() {
    if (!instance)
        instance = new Cruciatus();

    return instance;
}
