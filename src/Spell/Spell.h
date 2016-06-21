#ifndef SPELL_H
#define SPELL_H

#include "../Spellcaster/Spellcaster.h"

class Spell {
    protected:
        const char* spellName;

    public:
        Spell();
        ~Spell() {};

        const char* getSpellName() const;
        void setSpellName(const char* value);

        virtual void attack(Spellcaster* attacker, Unit* enemy) = 0;
};

#endif
