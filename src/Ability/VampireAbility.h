#ifndef VAMPIRE_ABILITY_H
#define VAMPIRE_ABILITY_H

#include "Ability.h"
#include "../Unit/AbstractVampire.h"
#include "../Unit/Wolf.h"
#include "../State/VampireState.h"
#include "../Unit/Rogue.h"

class VampireAbility : public Ability {
    private:
        static VampireAbility* instance;
        VampireAbility() {};

    public:
        void attack(Unit& attacker, Unit& enemy);
        void attack(AbstractVampire& attacker, Unit& enemy);
        void counterAttack(Unit& counterAttacker, Unit& enem);

        static VampireAbility* createInstance();
};

#endif
