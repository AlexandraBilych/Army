#ifndef BASE_ATTACK_H
#define BASE_ATTACK_H

#include "Ability.h"
#include "../Exceptions/Errors.h"

class BaseAttack : public Ability {

    public:
        BaseAttack() {};
        void attack(Unit* attacker, Unit* enemy);
        void counterAttack(Unit* enemy, Unit* attacker);

};

#endif
