#include "CombatMage.h"

#define DEBUG 1

CombatMage::CombatMage() {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR COMBATMAGE" << std::endl;
    }

    isCombatMage = true;
}
