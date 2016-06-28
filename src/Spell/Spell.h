#ifndef SPELL_H
#define SPELL_H

#include "../Spellcaster/Spellcaster.h"

class Spell {
    protected:
        std::string spellName;
        bool isCombatSpell;

    public:
        Spell();
        ~Spell() {};

        std::string getSpellName() const;
        bool getIsCombatSpell() const;

        void setSpellName(std::string value);

        virtual void spell(Spellcaster* attacker, Unit* enemy) = 0;
        virtual void description() const = 0;
        //virtual Soldier* spell(Spellcaster* attacker, const char* demonName) {};
};

#endif
