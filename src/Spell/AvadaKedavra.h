#ifndef AVADAKEDAVRA_H
#define AVADAKEDAVRA_H

#include "Spell.h"

class AvadaKedavra : public Spell {
    private:
        AvadaKedavra();
        static AvadaKedavra* instance;

    public:
        static const int cost = 30;
        static const int magicDamage = 50;

        ~AvadaKedavra() {};

        static AvadaKedavra* createSpell();

        void spell(Spellcaster* attacker, Unit* enemy);
        void description() const;

};

#endif
