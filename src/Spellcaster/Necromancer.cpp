#include "Necromancer.h"

#define DEBUG 0

Necromancer::Necromancer(const std::string& name, float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "NECROMANCER::CONSTRUCTOR" << std::endl;
    }

    isCombatMage = true;
    this->name = name;
    this->state = new SpellcasterState(maxHp, damage, mana);
    this->ability = BaseAttack::createInstance();

    spellBook.insert ( std::pair<std::string, Spell*>("Cruciatus", Cruciatus::createSpell()));
}

void Necromancer::addVictim(Unit& enemy) {
    if ( DEBUG ) {
        std::cout << "NECROMANCER::addVictim" << std::endl;
    }

    try {
        enemy.ensureIsAlive();
        victims.insert(&enemy);
        enemy.setMaster(this);
    } catch ( UnitIsDead& e ) {
        state->recoveryHP((enemy.getState()).getHitPointsLimit()*0.1);
    }
}

void Necromancer::description() {
    if ( DEBUG ) {
        std::cout << "NECROMANCER::description" << std::endl;
    }

    std::cout << "\nCombat mage - " << name << ". I'm Necromancer." << std::endl;
    state->showState();

    std::cout << "Necromancer's victims:";
    for ( std::set<Unit*>::iterator it = victims.begin(); it!=victims.end(); ++it ) {
        std::cout << ' ' << (*it)->getName();
    }
    std::cout << "\n";
}

void Necromancer::castSpell(const std::string& spellName, Unit& enemy) {
    try {
        Spellcaster::castSpell(spellName, enemy);
        addVictim(enemy);
    } catch ( std::out_of_range& e ) {
        std::cout << this->getName() << " don't have spell \"" << spellName << "\" in SpellBook!" << std::endl;
        showSpellBook();
    }
}

void Necromancer::attack(Unit& enemy) {
    Unit::attack(enemy);
    addVictim(enemy);
}

void Necromancer::counterAttack(Unit& enemy) {
    Unit::counterAttack(enemy);
    addVictim(enemy);
}
