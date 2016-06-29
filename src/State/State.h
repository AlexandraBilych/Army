#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "../Exceptions/Errors.h"

class State {
    protected:
        float hitPoints;
        float hitPointsLimit;
        float damage;
        float mana;

    public:
        State();
        float getHitPoints() const;
        float getHitPointsLimit() const;
        float getDamage() const;
        float getMana() const;

        virtual void setHitPoints(float value);
        void setHitPointsLimit(float value);
        void setDamage(float value);
        void setMana(float value);

        void recoveryHP(float value);
        void checkMana(float value);
        void takeDamage(float value);
        virtual void takeMagicDamage(float value);
        virtual void showState() = 0;

};

#endif
