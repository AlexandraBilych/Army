#ifndef HEALER_STATE_H
#define HEALER_STATE_H

#include "State.h"

class HealerState : public State {

    public:
        HealerState(int maxHp, int damage, int mana);
        ~HealerState();

        void showState();

};

#endif
