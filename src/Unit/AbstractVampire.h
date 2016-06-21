#ifndef ABSVAMPIRE_H
#define ABSVAMPIRE_H

#include "Unit.h"

class AbstractVampire : virtual public Unit {
    protected:
        bool isVampire;

    public:
        AbstractVampire();
        ~AbstractVampire() {};

        bool getIsVampire() const;

        void setIsVampire(bool value);
};

#endif
