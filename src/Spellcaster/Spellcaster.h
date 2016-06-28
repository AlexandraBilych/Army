#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "../Unit/Unit.h"
#include "../State/State.h"
#include "../Ability/Ability.h"
#include "../Spell/Spell.h"

#include <map>
#include <set>
#include "../Unit/Soldier.h"

class Spell;

class Spellcaster : public Unit {
    protected:
        bool isCombatMage;
        std::map<std::string, Spell*> spellBook;
        // static std::set<std::string> content;


    public:
        Spellcaster();
        bool getIsCombatMage() const;

        void setIsCombatMage(bool value);

        virtual void spell(std::string spellName, Unit* enemy);
        virtual void spell(std::string spellName);

        void addSpell(Spell* spell);
        void showSpellBook();
        void showSpell(std::string value) const;
        virtual void melleAttack(Unit* enemy);

};

#endif
