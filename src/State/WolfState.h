#ifndef WOLF_STATE_H
#define WOLF_STATE_H

#include "State.h"

class WolfState : public State {

    public:
        WolfState(float hp, float maxHp, float damage);
        WolfState(float maxHp, float damage);
        void showState();

};

#endif
