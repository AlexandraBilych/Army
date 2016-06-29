#ifndef WIZARD_STATE_H
#define WIZARD_STATE_H

#include "State.h"

class WizardState : public State {

    public:
        WizardState(float maxHp, float damage, float mana);
        ~WizardState();

        void showState();

};

#endif
