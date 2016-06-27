#ifndef AVADAKEDAVRA_H
#define AVADAKEDAVRA_H

#include "Spell.h"

class AvadaKedavra : public Spell {
    public:
        static const int cost = 30;
        static const int magicDamage = 50;

    public:
        AvadaKedavra();
        ~AvadaKedavra() {};

        void spell(Spellcaster* attacker, Unit* enemy);
        void description() const;

};

#endif
