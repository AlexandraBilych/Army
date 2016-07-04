#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "Spellcaster.h"
#include "../State/SpellcasterState.h"
#include "../Ability/BaseAttack.h"
#include "../Spell/Cruciatus.h"
#include <set>

class Necromancer: public Spellcaster {
    private:
        std::set <Unit*> victims;

        void addVictim(Unit& enemy);

    public:
        Necromancer(const std::string& name, float maxHp, float damage, float mana);
        ~Necromancer() {};

        void description();

        void castSpell(const std::string& spellName, Unit& enemy);
        void attack(Unit& enemy);
        void counterAttack(Unit& enemy);
};

#endif
