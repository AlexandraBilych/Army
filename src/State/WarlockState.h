#ifndef WARLOCK_STATE_H
#define WARLOCK_STATE_H

#include "State.h"

class WarlockState : public State {

    public:
        WarlockState(int maxHp, int damage, int mana);
        ~WarlockState();

        void showState();

};

#endif
