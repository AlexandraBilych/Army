#ifndef PRIEST_H
#define PRIEST_H

#include "Spellcaster.h"
#include "../State/PriestState.h"
#include "../Ability/BaseAttack.h"
#include "../Spell/HealthRecovery.h"

class Priest: public Spellcaster {
    public:
        Priest(const std::string& name, float maxHp, float damage, float mana);
        ~Priest() {};

        void description();
        void castSpell(const std::string& spellName, Unit& enemy);
};

#endif
