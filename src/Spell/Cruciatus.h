#ifndef CRUCIATUS_H
#define CRUCIATUS_H

#include "Spell.h"

class Cruciatus : public Spell {
    private:
        Cruciatus();
        static Cruciatus* instance;

    public:
        static const int cost = 10;
        static const int magicDamage = 20;

        ~Cruciatus() {};

        static Cruciatus* createSpell();

        void spell(Spellcaster* attacker, Unit* enemy);
        void description() const;
};

#endif
