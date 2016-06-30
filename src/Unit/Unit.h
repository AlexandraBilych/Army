#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../State/State.h"
#include "../Ability/Ability.h"
#include "../Exceptions/Errors.h"

class Ability;

class Unit {
    protected:
        std::string name;
        State* state;
        Ability* ability;
        bool isUndead;
        Unit* master;

    public:
        Unit();
        ~Unit() {};

        const std::string& getName() const ;
        State& getState() const;
        Ability& getAbility() const;
        bool getIsUndead() const;
        Unit& getMaster() const;

        void setState(State* value);
        void setAbility(Ability* value);
        void setIsUndead(bool value);
        void setMaster(Unit* master);

        virtual void description() = 0;

        virtual void attack(Unit& enemy);
        virtual void counterAttack(Unit& enemy);
        void ensureIsAlive();

};

#endif
