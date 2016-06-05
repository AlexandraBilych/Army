#ifndef ABILITY_H
#define ABILITY_H

#include "../Unit/Unit.h"
#include <iostream>

class Unit;

class Ability {
    public:
        Ability();
        virtual void attack(Unit* attacker, Unit* enemy) = 0;
        void counterAttack();

};

#endif
