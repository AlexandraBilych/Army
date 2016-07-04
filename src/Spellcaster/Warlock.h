#ifndef WARLOK_H
#define WARLOK_H

#include "Spellcaster.h"
#include "../State/SpellcasterState.h"
#include "../Ability/BaseAttack.h"
#include "../Unit/Demon.h"
#include "../Spell/SummonDemon.h"

class Warlock: public Spellcaster {
    public:
        using Spellcaster::castSpell;

        Warlock(const std::string& name, float maxHp, float damage, float mana);
        ~Warlock() {};

        Demon* castSpell(const std::string& spellName, const std::string& DemonName);
        void description();
};

#endif
