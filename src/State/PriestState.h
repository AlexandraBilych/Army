#ifndef PRIEST_STATE_H
#define PRIEST_STATE_H

#include "State.h"

class PriestState : public State {

    public:
        PriestState(float maxHp, float damage, float mana);
        ~PriestState();

        void showState();

};

#endif
