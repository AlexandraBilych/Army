#ifndef VAMPIRE_STATE_H
#define VAMPIRE_STATE_H

#include "State.h"

class VampireState : public State {

    public:
        VampireState(float hp, float maxHp, float damage);
        VampireState(float maxHp, float damage);

        void setHitPoints(float value);
        void showState();

};

#endif
