#ifndef WOLF_ABILITY_H
#define WOLF_ABILITY_H

#include "Ability.h"
#include "../Unit/Wolf.h"
#include "../State/WolfState.h"
#include "../Unit/AbstractVampire.h"

class WolfAbility : public Ability {
private:
        static WolfAbility* instance;
        WolfAbility() {};

    public:
        void attack(Unit& attacker, Unit& enemy);
        void attack(Wolf& attacker, Unit& enemy);
        void counterAttack(Unit& counterAttacker, Unit& enemy);

        static WolfAbility* createInstance();
};

#endif
