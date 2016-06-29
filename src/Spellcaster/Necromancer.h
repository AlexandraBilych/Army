#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "Spellcaster.h"
// #include "../State/NecromancerState.h"
#include "../State/WizardState.h"
#include "../Ability/BaseAttack.h"
#include "../Spell/Cruciatus.h"
#include <set>

class Necromancer: public Spellcaster {
    private:
        std::set <Unit*> victims;

        void addVictim(Unit* enemy);

    public:
        Necromancer(const char*name, float maxHp, float damage, float mana);
        ~Necromancer() {};

        void description();

        void spell(std::string spellName, Unit* enemy);
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
};

#endif
