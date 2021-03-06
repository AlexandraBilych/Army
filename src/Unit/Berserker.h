#ifndef BERSERKER_H
#define BERSERKER_H

#include "Wolf.h"
#include "AbstractVampire.h"
#include "../State/BerserkerState.h"
#include "../Ability/BaseAttack.h"

class Berserker : public Wolf, public AbstractVampire {
    public:
        Berserker(const std::string& name, float maxHp, float damage);
        ~Berserker();

        void description();
};

#endif
