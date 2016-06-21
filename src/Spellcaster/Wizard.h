#ifndef WIZARD_H
#define WIZARD_H

#include "CombatMage.h"
#include "../State/WizardState.h"
#include "../Ability/BaseAttack.h"

class Wizard: public CombatMage {
    public:
        Wizard(const char*name, int maxHp, int damage, int mana);
        ~Wizard() {};

        void description();
};

#endif
