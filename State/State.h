#ifndef STATE_H
#define STATE_H

#include <iostream>

class State {
    public:
        int hitPoints;
        int hitPointsLimit;
        int damage;

    public:
        State();
        int getHitPoints() const;
        int getHitPointsLimit() const;
        int getDamage() const;

        void setHitPoints(int value);
        void setHitPointsLimit(int value);
        void setDamage(int value);

        virtual void showState() = 0;

};

#endif
