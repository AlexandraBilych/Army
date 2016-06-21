#ifndef COMBAT_MAGE_H
#define COMBAT_MAGE_H

#include "Spellcaster.h"
#include <iostream>

class CombatMage : virtual public Spellcaster {
    public:
        CombatMage();
        ~CombatMage() {};

};

#endif
