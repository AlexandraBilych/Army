#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../State/State.h"
#include "../Ability/Ability.h"
#include "../Exceptions/Errors.h"

class Ability;

class Unit {
    protected:
        const char* name;
        State* state;
        Ability* ability;
        bool isUndead;

    public:
        Unit();
        const char* getName() const ;
        State* getState() const;
        Ability* getAbility() const;
        bool getIsUndead() const;

        void setState(State* value);
        void setAbility(Ability* value);
        void setIsUndead(bool value);

        virtual void description() = 0;

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
        void ensureIsAlive();

};

#endif
