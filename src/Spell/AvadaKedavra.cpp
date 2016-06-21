#include "AvadaKedavra.h"

#define DEBUG 1

AvadaKedavra::AvadaKedavra () {
    spellName = "AvadaKedavra";
}

void AvadaKedavra::attack(Spellcaster* attacker, Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "AvadaKedavra UNIT - UNIT" << std::endl;
    }
//CheckMana
    int newMana = ((attacker)->getState())->getMana() - cost;
//ManaIsNotEnought
    enemy->ensureIsAlive();
    int newEnemyHitPoint = (enemy->getState())->getHitPoints() - magicDamage;

    (enemy->getState())->takeDamage(newEnemyHitPoint);
    ((attacker)->getState())->setMana(newMana);
}

AvadaKedavra AvadaKedavra::operator*() const {
    return *this;
}

std::ostream& operator<<(std::ostream& out, const AvadaKedavra* avadaKedavra) {

    out << "Spell: " << avadaKedavra->getSpellName() << std::endl;
    out << "Cost: " << AvadaKedavra::cost << std::endl;
    out << "Damage: " << AvadaKedavra::magicDamage << std::endl;
    out << "-----------------------------------" << std::endl;

    return out;
}
