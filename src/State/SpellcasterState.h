#ifndef SPELLCASTER_STATE_H
#define SPELLCASTER_STATE_H

#include "State.h"

class SpellcasterState : public State {

    public:
        SpellcasterState(float maxHp, float damage, float mana);
        ~SpellcasterState();

        void showState();

};

#endif
