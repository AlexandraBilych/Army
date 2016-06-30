#ifndef ROGUE_ATTACK_H
#define ROGUE_ATTACK_H

#include "Ability.h"

class RogueAbility : public Ability {

    public:
        RogueAbility() {};
        void attack(Unit& attacker, Unit& enemy);
        void counterAttack(Unit& counterAttacker, Unit& enemy);

};

#endif
