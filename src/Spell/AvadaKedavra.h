#ifndef AVADAKEDAVRA_H
#define AVADAKEDAVRA_H

#include "Spell.h"

class AvadaKedavra : public Spell {
    private:
        AvadaKedavra();
        static AvadaKedavra* instance;

    public:
        static const float cost;
        static const float magicDamage;

        ~AvadaKedavra() {};

        static AvadaKedavra* createSpell();

        void castSpell(Spellcaster& attacker, Unit& enemy);
        void description() const;

};

#endif
