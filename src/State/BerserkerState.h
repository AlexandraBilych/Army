#ifndef BERSERKER_STATE_H
#define BERSERKER_STATE_H

#include "State.h"

class BerserkerState : public State {

    public:
        BerserkerState(float maxHp, float damage);
        void showState();

        void takeMagicDamage(float value);
};

#endif
