#ifndef CRUCIATUS_H
#define CRUCIATUS_H

#include "Spell.h"

class Cruciatus : public Spell {
    public:
        static const int cost = 10;
        static const int magicDamage = 20;

    public:
        Cruciatus();
        ~Cruciatus() {};

        void attack(Spellcaster* attacker, Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, const Cruciatus& cruciatus);

#endif
