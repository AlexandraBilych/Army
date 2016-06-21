#include "Spellcaster.h"

#define DEBUG 1

Spellcaster::Spellcaster() {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR SPELLCASTER" << std::endl;
    }
}

bool Spellcaster::getIsCombatMage() const{
    return isCombatMage;
}

void Spellcaster::setIsCombatMage(bool value) {
    isCombatMage = value;
}

// void Spellcaster::spell(Spellcaster* enemy) {
//     std::cout << "Spellcaster SPELL" << std::endl;
//     ability->attack(this, enemy);
// }

// void Spellcaster::spell(Unit* enemy) {
//     std::cout << "Spellcaster SPELL(UNIT)" << std::endl;
//     ability->attack(this, enemy);
// }

// void Spellcaster::attack(Spellcaster* enemy) {
//     std::cout << "Spellcaster MELLEATTACK" << std::endl;
//     ability->attack(this, enemy);
// }

void Spellcaster::addSpell(const char* spellName, Spell* spell) {
    spellBook.insert ( std::pair<const char*, Spell*>(spellName, spell) );
}

void Spellcaster::melleAttack(Unit* enemy) {
    std::cout << "Spellcaster MELLEATTACK" << std::endl;
    ability->attack(this, enemy);
}

void Spellcaster::showSpell(const char* value) const {
    std::cout << spellBook.at(value) << std::endl;
}

void Spellcaster::showSpellBook() {
    for (std::map<const char*, Spell*>::iterator it=spellBook.begin(); it!=spellBook.end(); ++it) {
        std::cout << it->first << " => " << it->second << '\n';
    }
}
// void Spellcaster::counterAttack(Spellcaster* enemy) {
//     std::cout << "Spellcaster COUNTER_ATTACK" << std::endl;
//     ability->counterAttack(this, enemy);
// }

// void Spellcaster::ensureIsAlive() {
//     if ( state->getHitPoints() == 0 ) {
//         throw UnitIsDead();
//     }
// }
