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
        static const float cost;

        ~SummonDemon() {};

        static SummonDemon* createSpell();

        void castSpell(Spellcaster& attacker, Unit& enemy) {};
        Demon* castSpell(Spellcaster& attacker, const std::string& demonName);
        void description() const;

};

#endif
