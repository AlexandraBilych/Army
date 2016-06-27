#include "Spell.h"

#define DEBUG 1

Spell::Spell() {
    if ( DEBUG ) {
        std::cout << "SPELL CONSTRUCTOR" << std::endl;
    }
}

const char* Spell::getSpellName() const {
    return spellName;
}

bool Spell::getIsCombatSpell() const {
    return isCombatSpell;
}

void Spell::setSpellName(const char* value) {
    spellName = value;
}
