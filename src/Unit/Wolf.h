#ifndef WOLF_H
#define WOLF_H

#include "Unit.h"

class Wolf : virtual public Unit {
    protected:
        State* altState;
        Ability* altAbility;
        bool isWerewolf;

    public:
        Wolf();
        ~Wolf() {};

        bool getIsWerewolf() const;
        State* getAltState() const;
        Ability* getAltAbility() const;

        void setIsWerewolf(bool value);
        void setAltAbility(Ability* value);
        void setAltState(State* value);

        void transform();
};

#endif
