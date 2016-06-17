#ifndef ABILITY_H
#define ABILITY_H

#include "../Unit/Unit.h"
#include "../Exceptions/Errors.h"

#include <iostream>

class Unit;

class Ability {
    public:
        Ability();
        virtual void attack(Unit* attacker, Unit* enemy) = 0;
        virtual void counterAttack(Unit* attacker, Unit* enemy) {
                std::cout << "ABILITY COUNTER_ATTACK" << std::endl;
        };

};

#endif
