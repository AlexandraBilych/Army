#ifndef WARLOCK_STATE_H
#define WARLOCK_STATE_H

#include "State.h"

class WarlockState : public State {

    public:
        WarlockState(float maxHp, float damage, float mana);
        ~WarlockState();

        void showState();

};

#endif
