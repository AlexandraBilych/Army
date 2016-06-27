#ifndef SPELL_H
#define SPELL_H

#include "../Spellcaster/Spellcaster.h"

class Spell {
    protected:
        const char* spellName;
        bool isCombatSpell;

    public:
        Spell();
        ~Spell() {};

        const char* getSpellName() const;
        bool getIsCombatSpell() const;

        void setSpellName(const char* value);

        virtual void spell(Spellcaster* attacker, Unit* enemy) = 0;
        virtual void description() const = 0;
};

#endif
