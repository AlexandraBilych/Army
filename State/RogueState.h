#ifndef ROGUE_STATE_H
#define ROGUE_STATE_H

#include "State.h"

class RogueState : public State {

    public:
        RogueState(int maxHp, int damage);
        void showState();

};

#endif
