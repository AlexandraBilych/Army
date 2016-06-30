#ifndef CRUCIATUS_H
#define CRUCIATUS_H

#include "Spell.h"

class Cruciatus : public Spell {
    private:
        Cruciatus();
        static Cruciatus* instance;

    public:
        static const float cost;
        static const float magicDamage;

        ~Cruciatus() {};

        static Cruciatus* createSpell();

        void castSpell(Spellcaster& attacker, Unit& enemy);
        void description() const;
};

#endif
