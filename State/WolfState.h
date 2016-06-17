#ifndef WOLF_STATE_H
#define WOLF_STATE_H

#include "State.h"

class WolfState : public State {

    public:
        WolfState(int hp, int maxHp, int damage);
        WolfState(int maxHp, int damage);
        void showState();

};

#endif
