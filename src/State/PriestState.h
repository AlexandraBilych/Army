#ifndef PRIEST_STATE_H
#define PRIEST_STATE_H

#include "State.h"

class PriestState : public State {

    public:
        PriestState(int maxHp, int damage, int mana);
        ~PriestState();

        void showState();

};

#endif
