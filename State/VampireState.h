#ifndef VAMPIRE_STATE_H
#define VAMPIRE_STATE_H

#include "State.h"

class VampireState : public State {

    public:
        VampireState(int hp, int maxHp, int damage);
        VampireState(int maxHp, int damage);

        void setHitPoints(int value);
        void showState();

};

#endif
