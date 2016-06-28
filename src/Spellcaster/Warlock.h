#ifndef WARLOK_H
#define WARLOK_H

#include "Spellcaster.h"
#include "../State/WarlockState.h"
#include "../Ability/BaseAttack.h"
#include "../Unit/Demon.h"
#include "../Spell/SummonDemon.h"

class Warlock: public Spellcaster {
    public:
        using Spellcaster::spell;

        Warlock(const char*name, int maxHp, int damage, int mana);
        ~Warlock() {};

        Demon* spell(const char* spellName, const char* DemonName);
        void description();
};

#endif
