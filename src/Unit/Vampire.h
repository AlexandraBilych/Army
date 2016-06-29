#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "AbstractVampire.h"
#include "../State/VampireState.h"
#include "../Ability/VampireAbility.h"

class Vampire : public AbstractVampire, public Wolf {

    public:
        Vampire(const char* name, float maxHp, float damage);
        ~Vampire() {};

        void description();
};

#endif
