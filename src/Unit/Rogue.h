#ifndef ROGUE_H
#define ROGUE_H

#include "Wolf.h"
#include "../State/RogueState.h"
#include "AbstractVampire.h"
#include "../Ability/RogueAbility.h"

class Rogue : public Wolf, public AbstractVampire {
    public:
        Rogue(const char* name, float maxHp, float damage);
        void description();
};

#endif
