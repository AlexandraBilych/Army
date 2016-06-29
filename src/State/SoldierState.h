#ifndef SOLDIER_STATE_H
#define SOLDIER_STATE_H

#include "State.h"

class SoldierState : public State {

    public:
        SoldierState(float maxHp, float damage);
        void showState();

};

#endif
