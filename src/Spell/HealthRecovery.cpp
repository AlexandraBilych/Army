#include "HealthRecovery.h"

#define DEBUG 1

HealthRecovery::HealthRecovery () {
    spellName = "HealthRecovery";
    isCombatSpell = false;
}

void HealthRecovery::spell(Spellcaster* self, Unit* lover) {
    if ( DEBUG ) {
        std::cout << "HealthRecovery Spellcaster" << std::endl;
    }
    (self->getState())->checkMana(this->cost);
    lover->ensureIsAlive();

    int newMana = (self->getState())->getMana() - cost;

    if ( self->getIsCombatMage() ) {
        (lover->getState())->recoveryHP(recoveredHP/2);
    } else {
        (lover->getState())->recoveryHP(recoveredHP);
    }

    (self->getState())->setMana(newMana);
}

void HealthRecovery::description() const {
    std::cout << "Magic damage: " << this->recoveredHP << "; Spell cost: " << this->cost << std::endl;
}
