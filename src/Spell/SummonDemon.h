#ifndef SUMMONDEMON_H
#define SUMMONDEMON_H

#include "Spell.h"
#include "../Spellcaster/Warlock.h"
#include "../Unit/Demon.h"

class SummonDemon : public Spell {
    private:
        SummonDemon();
        static SummonDemon* instance;

    public:
        static const int cost = 20;

        ~SummonDemon() {};

        static SummonDemon* createSpell();

        void spell(Spellcaster* attacker, Unit* enemy);
        Demon* spell(Spellcaster* attacker, const char* demonName);
        void description() const;

};

#endif
