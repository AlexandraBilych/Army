#ifndef WOLF_H
#define WOLF_H

#include "Unit.h"

class Wolf : public Unit {
    protected:
        State* altState;
        Ability* altAbility;
        bool isWerewolf;
        bool wolfActive;

    public:
        Wolf();
        ~Wolf() {};

        bool getIsWerewolf() const;
        State* getAltState() const;
        Ability* getAltAbility() const;

        void setIsWerewolf(bool value);
        void setAltAbility(Ability* value);
        void setAltState(State* value);

        void attack(Wolf* enemy);
        void transform();
};

#endif
