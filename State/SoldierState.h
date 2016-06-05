#ifndef SOLDIER_STATE_H
#define SOLDIER_STATE_H

#include "State.h"

class SoldierState : public State {

    public:
        SoldierState(int hp, int maxHp, int damage);
        void showState();

};

#endif
