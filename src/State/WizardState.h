#ifndef WIZARD_STATE_H
#define WIZARD_STATE_H

#include "State.h"

class WizardState : public State {

    public:
        WizardState(int maxHp, int damage, int mana);
        ~WizardState();

        void showState();

};

#endif
