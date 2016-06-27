#ifndef BERSERKER_STATE_H
#define BERSERKER_STATE_H

#include "State.h"

class BerserkerState : public State {

    public:
        BerserkerState(int maxHp, int damage);
        void showState();

        void takeMagicDamage(int value);
};

#endif
