#include "Cruciatus.h"

#define DEBUG 1

Cruciatus::Cruciatus () {
    spellName = "Cruciatus";
}

void Cruciatus::attack(Spellcaster* attacker, Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "Cruciatus UNIT - UNIT" << std::endl;
    }
//CheckMana
    int newMana = ((attacker)->getState())->getMana() - cost;
//ManaIsNotEnought
    enemy->ensureIsAlive();
    int newEnemyHitPoint = (enemy->getState())->getHitPoints() - magicDamage;

    (enemy->getState())->takeDamage(newEnemyHitPoint);
    ((attacker)->getState())->setMana(newMana);
}

std::ostream& operator<<(std::ostream& out, const Cruciatus* cruciatus) {

    out << "Spell: " << cruciatus->getSpellName() << std::endl;
    out << "Cost: " << Cruciatus::cost << std::endl;
    out << "Damage: " << Cruciatus::magicDamage << std::endl;
    out << "-----------------------------------" << std::endl;
    return out;
}
