#ifndef HEALTH_RECOVERY_H
#define HEALTH_RECOVERY_H

#include "Spell.h"

class HealthRecovery : public Spell {
    private:
        HealthRecovery();
        static HealthRecovery* instance;

    public:
        static const int cost = 10;
        static const int recoveredHP = 10;

        ~HealthRecovery() {};

        static HealthRecovery* createSpell();

        void spell(Spellcaster* attacker, Unit* enemy);
        void description() const;
};

#endif
