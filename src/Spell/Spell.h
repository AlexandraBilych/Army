#ifndef SPELL_H
#define SPELL_H

#include "../Spellcaster/Spellcaster.h"

class Spell {
    protected:
        std::string spellName;
        bool isCombatSpell;
        bool isShareSpell;

    public:
        Spell();
        ~Spell() {};

        const std::string& getSpellName() const;
        bool getIsCombatSpell() const;
        bool getIsShareSpell() const;

        void setSpellName(const std::string& value);

        virtual void castSpell(Spellcaster& attacker, Unit& enemy) = 0;
        virtual void description() const = 0;
};

#endif
