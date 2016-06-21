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

void Spell::setSpellName(const char* value) {
    spellName = value;
}
