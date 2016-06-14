#ifndef WOLF_ABILITY_H
#define WOLF_ABILITY_H

#include "Ability.h"
#include "../Unit/Wolf.h"
#include "../State/WolfState.h"

class WolfAbility : public Ability {

    public:
        WolfAbility() {};
        void attack(Unit* attacker, Unit* enemy);
        void attack(Wolf* attacker, Unit* enemy);
        void counterAttack(Unit* enemy, Wolf* attacker);

};

#endif
