#ifndef WIZARD_H
#define WIZARD_H

#include "Spellcaster.h"
#include "../State/WizardState.h"
#include "../Ability/BaseAttack.h"
#include "../Spell/Cruciatus.h"

class Wizard: public Spellcaster {
    public:
        Wizard(const std::string& name, float maxHp, float damage, float mana);
        ~Wizard() {};

        void description();
};

#endif
