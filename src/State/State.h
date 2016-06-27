#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "../Exceptions/Errors.h"

class State {
    protected:
        int hitPoints;
        int hitPointsLimit;
        int damage;
        int mana;

    public:
        State();
        int getHitPoints() const;
        int getHitPointsLimit() const;
        int getDamage() const;
        int getMana() const;

        virtual void setHitPoints(int value);
        void setHitPointsLimit(int value);
        void setDamage(int value);
        void setMana(int value);

        void recoveryHP(int value);
        void checkMana(int value);
        void takeDamage(int value);
        virtual void takeMagicDamage(int value);
        virtual void showState() = 0;

};

#endif
