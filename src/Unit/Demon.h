#ifndef DEMON_H
#define DEMON_H

#include "Soldier.h"
#include "../State/SoldierState.h"
#include "../Ability/BaseAttack.h"

class Demon : public Soldier {
    private:
        bool superAttackIsReady;

    public:
        Demon(const char* name, int maxHp = 100, int damage = 10);

        void superAttack(Unit* enemy);
        void description();
};

#endif
