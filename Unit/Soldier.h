#ifndef SOLDIER_H
#define SOLDIER_H

#include "Wolf.h"
#include "../State/SoldierState.h"
#include "../Ability/BaseAttack.h"

class Soldier : public Wolf {
    public:
        Soldier(const char* name, int hp, int maxHp, int damage);
        void description();
};

#endif
