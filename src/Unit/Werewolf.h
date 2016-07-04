#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Wolf.h"
#include "../Ability/WolfAbility.h"
#include "../State/WolfState.h"
#include "../State/SoldierState.h"
#include "../Ability/BaseAttack.h"

class Werewolf : public Wolf {
    public:
        Werewolf(const std::string& name, float maxHp, float damage);
        ~Werewolf();

        void description();
};

#endif
