#ifndef DEMON_H
#define DEMON_H

#include "Soldier.h"
#include "../State/SoldierState.h"
#include "../Ability/BaseAttack.h"

class Demon : public Soldier {
    private:
        bool superAttackIsReady;

    public:
        Demon(const std::string& name, float maxHp = 100, float damage = 10);
        ~Demon();

        void superAttack(Unit& enemy);
        void description();
};

#endif
