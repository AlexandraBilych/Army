#ifndef HEALTH_RECOVERY_H
#define HEALTH_RECOVERY_H

#include "Spell.h"

class HealthRecovery : public Spell {
    private:
        HealthRecovery();
        static HealthRecovery* instance;

    public:
        static const float cost;
        static const float recoveredHP;

        ~HealthRecovery() {};

        static HealthRecovery* createSpell();

        void spell(Spellcaster* attacker, Unit* enemy);
        void description() const;
};

#endif
