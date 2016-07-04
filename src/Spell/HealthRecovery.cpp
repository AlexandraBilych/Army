#include "HealthRecovery.h"

#define DEBUG 0

HealthRecovery::HealthRecovery () {
    spellName = "HealthRecovery";
    isCombatSpell = false;
}

void HealthRecovery::castSpell(Spellcaster& self, Unit& lover) {
    if ( DEBUG ) {
        std::cout << "HealthRecovery Spellcaster" << std::endl;
    }
    try {
        (self.getState()).checkMana(this->cost);
        lover.ensureIsAlive();

        float newMana = (self.getState()).getMana() - cost;

        if ( self.getIsCombatMage() ) {
            (lover.getState()).recoveryHP(recoveredHP/2);
        } else {
            (lover.getState()).recoveryHP(recoveredHP);
        }

        (self.getState()).setMana(newMana);
    } catch ( UnitIsDead& e ) {
        std::cout << lover.getName() << " is died!" << std::endl;
    }
}

void HealthRecovery::description() const {
    std::cout << "Magic damage: " << this->recoveredHP << "; Spell cost: " << this->cost << std::endl;
}

HealthRecovery* HealthRecovery::instance = NULL;
const float HealthRecovery::cost = 10;
const float HealthRecovery::recoveredHP = 10;

HealthRecovery* HealthRecovery::createSpell() {
    if (!instance)
        instance = new HealthRecovery();

    return instance;
}
