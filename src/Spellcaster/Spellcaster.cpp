#include "Spellcaster.h"

#define DEBUG 1

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

void Spellcaster::spell(const char* spellName, Unit* enemy) {
    std::cout << "Spellcaster SPELL" << std::endl;
    (spellBook.at(spellName))->spell(this, enemy);
}

void Spellcaster::spell(const char* spellName) {
    std::cout << "Spellcaster SPELL" << std::endl;
    if ( (spellBook.at(spellName))->getIsCombatSpell() ) {
        throw NotApplyToSelfSpell();
    }

    (spellBook.at(spellName))->spell(this, this);
}

void Spellcaster::addSpell(const char* spellName, Spell* spell) {
    spellBook.insert ( std::pair<const char*, Spell*>(spellName, spell) );
}

void Spellcaster::melleAttack(Unit* enemy) {
    std::cout << "Spellcaster MELLEATTACK" << std::endl;
    ability->attack(this, enemy);
}

void Spellcaster::showSpell(const char* value) const {
    std::cout << value << " => ";
    (spellBook.at(value))->description();
}

void Spellcaster::showSpellBook() {
    std::cout << "Combat spells:";
    for (std::map<const char*, Spell*>::iterator it=spellBook.begin(); it!=spellBook.end(); ++it) {
        if ( it->second->getIsCombatSpell() ) {
            std::cout << it->first << " ";
        }
    }

    std::cout << "\nHealing spells:";
    for (std::map<const char*, Spell*>::iterator it=spellBook.begin(); it!=spellBook.end(); ++it) {
        if ( !it->second->getIsCombatSpell() ) {
            std::cout << it->first << " ";
        }
    }

    std::cout << "\n";
}
