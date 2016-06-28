#ifndef SOLDIER_H
#define SOLDIER_H

#include "Wolf.h"
#include "AbstractVampire.h"
#include "../State/SoldierState.h"
#include "../Ability/BaseAttack.h"

class Soldier : public Wolf, public AbstractVampire {
    protected:
        Soldier() {};

    public:
        Soldier(const char* name, int maxHp, int damage);
        void description();
};

#endif
