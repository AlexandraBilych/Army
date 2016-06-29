#ifndef HEALER_STATE_H
#define HEALER_STATE_H

#include "State.h"

class HealerState : public State {

    public:
        HealerState(float maxHp, float damage, float mana);
        ~HealerState();

        void showState();

};

#endif
