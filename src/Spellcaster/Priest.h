#ifndef PRIEST_H
#define PRIEST_H

#include "Spellcaster.h"
#include "../State/PriestState.h"
#include "../Ability/BaseAttack.h"
#include "../Spell/Cruciatus.h"

class Priest: public Spellcaster {
    public:
        Priest(const char*name, int maxHp, int damage, int mana);
        ~Priest() {};

        void description();
        void spell(std::string spellName, Unit* enemy);
};

#endif
