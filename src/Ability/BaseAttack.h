#ifndef BASE_ATTACK_H
#define BASE_ATTACK_H

#include "Ability.h"
#include "../Unit/Soldier.h"

class Soldier;

class BaseAttack : public Ability {
    private:
        static BaseAttack* instance;
        BaseAttack() {};

    public:
        void attack(Unit& attacker, Unit& enemy);
        void counterAttack(Unit& counterAttacker, Unit& enemy);

        static BaseAttack* createInstance();
};

#endif
