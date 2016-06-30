#include "Spell.h"

#define DEBUG 1

Spell::Spell() {
    if ( DEBUG ) {
        std::cout << "SPELL CONSTRUCTOR" << std::endl;
    }

    isShareSpell = false;
}

const std::string& Spell::getSpellName() const {
    return spellName;
}

bool Spell::getIsCombatSpell() const {
    return isCombatSpell;
}

bool Spell::getIsShareSpell() const {
    return isShareSpell;
}

void Spell::setSpellName(const std::string& value) {
    spellName = value;
}
