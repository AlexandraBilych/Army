#ifndef HEALER_H
#define HEALER_H

#include "Spellcaster.h"
#include "../State/SpellcasterState.h"
#include "../Ability/BaseAttack.h"
#include "../Spell/HealthRecovery.h"

class Healer: public Spellcaster {
    public:
        Healer(const std::string& name, float maxHp, float damage, float mana);
        ~Healer() {};

        void description();
};

#endif
