#ifndef NECROMANCER_STATE_H
#define NECROMANCER_STATE_H

#include "State.h"

class NecromancerState : public State {

    public:
        NecromancerState(float maxHp, float damage, float mana);
        ~NecromancerState();

        void showState();

};

#endif
