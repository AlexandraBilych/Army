#ifndef HEALER_H
#define HEALER_H

#include "Spellcaster.h"
#include "../State/HealerState.h"
#include "../Ability/BaseAttack.h"

class Healer: public Spellcaster {
    public:
        Healer(const char*name, int maxHp, int damage, int mana);
        ~Healer() {};

        void description();
};

#endif
