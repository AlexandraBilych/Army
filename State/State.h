#ifndef STATE_H
#define STATE_H

#include <iostream>

class State {
    protected:
        int hitPoints;
        int hitPointsLimit;
        int damage;

    public:
        State();
        int getHitPoints() const;
        int getHitPointsLimit() const;
        int getDamage() const;

        virtual void setHitPoints(int value);
        void setHitPointsLimit(int value);
        void setDamage(int value);

        void takeDamage(int value);
        virtual void showState() = 0;

};

#endif
