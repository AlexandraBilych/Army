#ifndef BERSERKER_H
#define BERSERKER_H

#include "Wolf.h"
#include "AbstractVampire.h"
#include "../State/BerserkerState.h"
#include "../Ability/BaseAttack.h"

class Berserker : public Wolf, AbstractVampire {
    public:
        Berserker(const char* name, int maxHp, int damage);
        void description();
};

#endif
