#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "../Unit/Unit.h"
#include "../State/State.h"
#include "../Ability/Ability.h"
#include "../Spell/Spell.h"
#include "../Exceptions/Errors.h"
#include <map>

class Spell;

class Spellcaster : public Unit {
    protected:
        bool isCombatMage;
        std::map<const char*, Spell*> spellBook;


    public:
        Spellcaster();
        bool getIsCombatMage() const;

        void setIsCombatMage(bool value);

        // virtual void spell(Spellcaster* enemy);
        // virtual void spell(Unit* enemy);

        // virtual void attack(Unit* enemy);
        void addSpell(const char*, Spell* spell);
        void showSpellBook();
        void showSpell(const char* value) const;
        virtual void melleAttack(Unit* enemy);

};

#endif
