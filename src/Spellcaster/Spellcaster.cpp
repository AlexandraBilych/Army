#include "Spellcaster.h"

#define DEBUG 0

Spellcaster::Spellcaster() {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR SPELLCASTER" << std::endl;
    }

    isCombatMage = false;

}

bool Spellcaster::getIsCombatMage() const{
    return isCombatMage;
}

void Spellcaster::setIsCombatMage(bool value) {
    isCombatMage = value;
}

void Spellcaster::castSpell(const std::string& spellName, Unit& enemy) {
    try {
        (spellBook.at(spellName))->castSpell(*this, enemy);
    } catch ( std::out_of_range& e ) {
        std::cout << this->getName() << " don't have spell \"" << spellName << "\" in SpellBook!" << std::endl;
        showSpellBook();
    }
}

void Spellcaster::castSpell(const std::string& spellName) {
    try {
        if ( (spellBook.at(spellName))->getIsCombatSpell() ) {
            throw NotApplyToSelfSpell();
        }

        (spellBook.at(spellName))->castSpell(*this, *this);
    } catch ( std::out_of_range& e ) {
        std::cout << this->getName() << " don't have spell \"" << spellName << "\" in SpellBook!" << std::endl;
        showSpellBook();
    }
}

void Spellcaster::addSpell(Spell* spell) {
    if ( DEBUG ) {
        std::cout << "\t\taddSpell" << std::endl;
    }

    if ( spell->getIsShareSpell() ) {
        throw NotShareSpell();
    }

    spellBook.insert ( std::pair<std::string, Spell*>(spell->getSpellName(), spell));

}

void Spellcaster::showSpell(const std::string& value) const {
    std::cout << value << " => ";
    (spellBook.at(value))->description();
}

void Spellcaster::showSpellBook() {
    std::cout << "Spellbook\nCombat spells:";
    for (std::map<std::string, Spell*>::iterator it=spellBook.begin(); it!=spellBook.end(); ++it) {
        if ( it->second->getIsCombatSpell() ) {
            std::cout << it->first << " ";
        }
    }

    std::cout << "\nHealing spells:";
    for (std::map<std::string, Spell*>::iterator it=spellBook.begin(); it!=spellBook.end(); ++it) {
        if ( !it->second->getIsCombatSpell() ) {
            std::cout << it->first << " ";
        }
    }

    std::cout << "\n";
}
