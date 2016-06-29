#include "AvadaKedavra.h"

#define DEBUG 1

AvadaKedavra::AvadaKedavra () {
    spellName = "AvadaKedavra";
    isCombatSpell = true;
}

void AvadaKedavra::spell(Spellcaster* attacker, Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "AvadaKedavra UNIT - UNIT" << std::endl;
    }
    (attacker->getState())->checkMana(this->cost);
    enemy->ensureIsAlive();

    float newMana = (attacker->getState())->getMana() - cost;

    if ( attacker->getIsCombatMage() ) {
        (enemy->getState())->takeMagicDamage(magicDamage);
    } else {
        (enemy->getState())->takeMagicDamage(magicDamage/2);
    }

    (attacker->getState())->setMana(newMana);
}

void AvadaKedavra::description() const {
    std::cout << "Magic damage: " << this->magicDamage << "; Spell cost: " << this->cost << std::endl;
}

AvadaKedavra* AvadaKedavra::instance = NULL;
const float AvadaKedavra::cost = 30;
const float AvadaKedavra::magicDamage = 50;

AvadaKedavra* AvadaKedavra::createSpell() {
    if (!instance)
        instance = new AvadaKedavra();

    return instance;
}
