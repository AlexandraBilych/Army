#include "Necromancer.h"

#define DEBUG 1

Necromancer::Necromancer(const char* name, float maxHp, float damage, float mana) {
    if ( DEBUG ) {
        std::cout << "NECROMANCER::CONSTRUCTOR" << std::endl;
    }

    isCombatMage = true;
    this->name = name;
    // this->state = new NecromancerState(maxHp, damage, mana);
    this->state = new WizardState(maxHp, damage, mana);
    this->ability = new BaseAttack();

    spellBook.insert ( std::pair<std::string, Spell*>("Cruciatus", Cruciatus::createSpell()));
}

void Necromancer::addVictim(Unit* enemy) {
    if ( DEBUG ) {
        std::cout << "NECROMANCER::addVictim" << std::endl;
    }

    try {
        enemy->ensureIsAlive();
        victims.insert(enemy);
        enemy->setMaster(this);
    } catch ( UnitIsDead e ) {
        state->recoveryHP((enemy->getState())->getHitPointsLimit()*0.1);
    }
}

void Necromancer::description() {
    if ( DEBUG ) {
        std::cout << "NECROMANCER::description" << std::endl;
    }

    std::cout << "\nCombat mage - " << name << std::endl;
    state->showState();

    std::cout << "Victims:";
    for ( std::set<Unit*>::iterator it = victims.begin(); it!=victims.end(); ++it ) {
        std::cout << ' ' << (*it)->getName();
    }
    std::cout << "\n";
}

void Necromancer::spell(std::string spellName, Unit* enemy) {
    std::cout << "Priest SPELL" << std::endl;

    Spellcaster::spell(spellName, enemy);
    addVictim(enemy);
}

void Necromancer::attack(Unit* enemy) {
    std::cout << "Necromancer ATTACK" << std::endl;

    Unit::attack(enemy);
    addVictim(enemy);
}

void Necromancer::counterAttack(Unit* enemy) {
    std::cout << "Necromancer COUNTER_ATTACK" << std::endl;

    Unit::counterAttack(enemy);
    addVictim(enemy);
}

