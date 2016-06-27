#ifndef HEALTH_RECOVERY_H
#define HEALTH_RECOVERY_H

#include "Spell.h"

class HealthRecovery : public Spell {
    public:
        static const int cost = 10;
        static const int recoveredHP = 10;

    public:
        HealthRecovery();
        ~HealthRecovery() {};

        void spell(Spellcaster* self, Unit* lover);
        void description() const;
};

#endif
