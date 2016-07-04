#include "Header.h"
#include <iostream>

int main() {
    Soldier* soldierFirst = new Soldier("soldierFirst", 300, 30);
    soldierFirst->description();
    Soldier* soldierSecond = new Soldier("soldierSecond", 1000, 20);
    soldierSecond->description();

    Vampire* vampireFirst = new Vampire("vampireFirst", 100, 30);
    vampireFirst->description();
    Vampire* vampireSecond = new Vampire("vampireSecond", 100, 30);
    vampireSecond->description();

    Rogue* rogueFirst = new Rogue("rogueFirst", 150, 30);
    rogueFirst->description();
    Rogue* rogueSecond = new Rogue("rogueSecond", 150, 30);
    rogueSecond->description();

    Werewolf* werewolfFirst = new Werewolf("werewolfFirst", 150, 20);
    werewolfFirst->description();
    Werewolf* werewolfSecond = new Werewolf("werewolfSecond", 150, 20);
    werewolfSecond->description();

    Berserker* berserkerFirst = new Berserker("berserkerFirst", 120, 20);
    berserkerFirst->description();
    Berserker* berserkerSecond = new Berserker("berserkerSecond", 200, 20);
    berserkerSecond->description();

    Wizard* wizardFirst = new Wizard("wizardFirst", 200, 5, 70);
    wizardFirst->addSpell(AvadaKedavra::createSpell());
    wizardFirst->description();
    wizardFirst->showSpellBook();

    Wizard* wizardSecond = new Wizard("wizardSecond", 150, 5, 70);
    wizardSecond->addSpell(HealthRecovery::createSpell());
    // wizardSecond->addSpell(SummonDemon::createSpell());
    wizardSecond->description();
    wizardSecond->showSpellBook();

    Warlock* warlockFirst = new Warlock("warlockFirst", 150, 10, 60);
    warlockFirst->addSpell(Cruciatus::createSpell());
    warlockFirst->addSpell(HealthRecovery::createSpell());
    warlockFirst->description();
    warlockFirst->showSpellBook();

    Warlock* warlockSecond = new Warlock("warlockSecond", 150, 10, 60);
    warlockSecond->addSpell(AvadaKedavra::createSpell());
    warlockSecond->addSpell(HealthRecovery::createSpell());
    warlockSecond->addSpell(HealthRecovery::createSpell());
    warlockSecond->description();
    warlockSecond->showSpellBook();

    Healer* healerFirst = new Healer("healerFirst", 150, 5, 100);
    healerFirst->addSpell(Cruciatus::createSpell());
    healerFirst->description();
    healerFirst->showSpellBook();

    Healer* healerSecond = new Healer("healerSecond", 150, 5, 100);
    healerSecond->addSpell(AvadaKedavra::createSpell());
    healerSecond->description();
    healerSecond->showSpellBook();

    Priest* priestFirst = new Priest("priestFirst", 100, 10, 70);
    priestFirst->addSpell(AvadaKedavra::createSpell());
    priestFirst->addSpell(HealthRecovery::createSpell());
    priestFirst->description();
    priestFirst->showSpellBook();

    Priest* priestSecond = new Priest("priestSecond", 100, 10, 70);
    priestSecond->addSpell(AvadaKedavra::createSpell());
    priestSecond->description();
    priestSecond->showSpellBook();

    Necromancer* necromancerFirst = new Necromancer("necromancerFirst", 150, 5, 100);
    necromancerFirst->addSpell(HealthRecovery::createSpell());
    necromancerFirst->description();
    necromancerFirst->showSpellBook();

    Necromancer* necromancerSecond = new Necromancer("necromancerSecond", 150, 5, 100);
    necromancerSecond->addSpell(HealthRecovery::createSpell());
    necromancerSecond->description();
    necromancerSecond->showSpellBook();


//NECROMANCER TEST

    std::cout << "\n-----------Attack(Soldier-Necromancer)------------\n" << std::endl;
    soldierFirst->attack(*necromancerFirst);
    soldierFirst->description();
    necromancerFirst->description();

    std::cout << "\n-----------MagicAttack(Necromancer-Soldier)------------\n" << std::endl;
    necromancerFirst->castSpell("Cruciatus", *berserkerFirst);
    necromancerFirst->description();
    berserkerFirst->description();

    std::cout << "\n-----------Attack(Necromancer-Wizard)------------\n" << std::endl;
    necromancerSecond->castSpell("Cruciatus", *wizardSecond);
    necromancerSecond->description();
    wizardSecond->description();


// SOLDIER TEST

    std::cout << "\n-----------Attack(Soldier-Soldier)------------\n" << std::endl;
    soldierFirst->attack(*soldierSecond);
    soldierFirst->description();
    soldierSecond->description();

    std::cout << "\n-----------Attack(Soldier-Soldier)------------\n" << std::endl;
    soldierSecond->attack(*soldierFirst);
    soldierFirst->description();
    soldierSecond->description();

    std::cout << "\n-----------Attack(Soldier-Rogue)------------\n" << std::endl;
    soldierFirst->attack(*rogueFirst);
    soldierFirst->description();
    rogueFirst->description();

    std::cout << "\n-----------Attack(Soldier-Wizard)------------\n" << std::endl;
    soldierFirst->attack(*wizardSecond);
    soldierFirst->description();
    wizardSecond->description();

    std::cout << "\n-----------Attack(Soldier-Priest)------------\n" << std::endl;
    soldierSecond->attack(*priestSecond);
    soldierSecond->description();
    priestSecond->description();

    std::cout << "\n-----------Attack(Soldier-Berserker)------------\n" << std::endl;
    soldierSecond->attack(*berserkerFirst);
    berserkerFirst->description();
    soldierSecond->description();

    std::cout << "\n-----------Attack(Soldier-Vampire)------------\n" << std::endl;
    soldierFirst->attack(*vampireFirst);
    soldierFirst->description();
    vampireFirst->description();

    std::cout << "\n-----------Attack(Wolf-Soldier)------------\n" << std::endl;
    werewolfFirst->transform();
    soldierSecond->attack(*werewolfFirst);
    werewolfFirst->description();
    soldierSecond->description();

    std::cout << "\n-----------Werewolf transform------------\n" << std::endl;
    soldierSecond->transform();
    soldierSecond->description();


// ROGUE TEST

    std::cout << "\n-----------Attack(Rogue-Rogue)------------\n" << std::endl;
    rogueSecond->attack(*rogueFirst);
    rogueSecond->description();
    rogueFirst->description();

    std::cout << "\n-----------Attack(Wolf-Rogue)------------\n" << std::endl;
    werewolfSecond->attack(*rogueFirst);
    rogueFirst->description();
    werewolfSecond->description();

    std::cout << "\n-----------Rouge transform------------\n" << std::endl;
    rogueFirst->transform();
    rogueFirst->description();

    std::cout << "\n-----------Attack(Rogue-Soldier(Wolf))------------\n" << std::endl;
    rogueFirst->attack(*soldierFirst);
    rogueFirst->description();
    soldierFirst->description();

    std::cout << "\n-----------Attack(Rogue-Soldier(Vampire))------------\n" << std::endl;
    rogueSecond->attack(*soldierFirst);
    rogueSecond->description();
    soldierFirst->description();

    std::cout << "\n-----------Attack(Vampire-Rogue)------------\n" << std::endl;
    vampireFirst->attack(*rogueSecond);
    vampireFirst->description();
    rogueSecond->description();


//BERSERKER TEST

    std::cout << "\n-----------Attack(Berserker-Berserker)------------\n" << std::endl;
    berserkerFirst->attack(*berserkerSecond);
    berserkerFirst->description();
    berserkerSecond->description();

    std::cout << "\n-----------Attack(Berserker-Soldier)------------\n" << std::endl;
    berserkerSecond->attack(*soldierFirst);
    berserkerSecond->description();
    soldierFirst->description();

    std::cout << "\n-----------Attack(Wizard-Berserker)------------\n" << std::endl;
    wizardFirst->castSpell("AvadaKedavra", *berserkerFirst);
    wizardFirst->description();
    berserkerFirst->description();

    std::cout << "\n-----------Attack(Healer-Berserker) -- Spell Cruciatus------------\n" << std::endl;
    healerFirst->castSpell("Cruciatus", *berserkerFirst);
    healerFirst->description();
    berserkerFirst->description();

    std::cout << "\n-----------Attack(Necromancer-Berserker)------------\n" << std::endl;
    necromancerFirst->castSpell("Cruciatus", *berserkerFirst);
    necromancerFirst->description();
    berserkerFirst->description();

    std::cout << "\n-----------Attack(Vampire-Berserker)------------\n" << std::endl;
    vampireFirst->attack(*berserkerSecond);
    vampireFirst->description();
    berserkerSecond->description();



// VAMPIRE TEST

    std::cout << "\n-----------Attack(Vampire(Rogue)-Vampire)------------\n" << std::endl;
    rogueSecond->attack(*vampireSecond);
    rogueSecond->description();
    vampireSecond->description();

    std::cout << "\n-----------Attack(Wolf-Vampire)------------\n" << std::endl;
    werewolfSecond->attack(*vampireSecond);
    werewolfSecond->description();
    vampireSecond->description();

    std::cout << "\n-----------Attack(Vampire - Vampire(Berserker))------------\n" << std::endl;
    werewolfFirst->attack(*berserkerSecond);
    werewolfFirst->description();
    berserkerSecond->description();


// WERWOLF TEST

    werewolfSecond->transform();
    std::cout << "\n-----------Werewolf transform------------\n" << std::endl;
    werewolfSecond->description();

    std::cout << "\n-----------Attack(s-w)------------\n" << std::endl;
    werewolfFirst->attack(*werewolfSecond);
    werewolfFirst->description();
    werewolfSecond->description();

    std::cout << "\n-----------Werewolf transform------------\n" << std::endl;
    werewolfFirst->transform();
    werewolfFirst->description();

    std::cout << "\n-----------Attack(w-s)------------\n" << std::endl;
    werewolfFirst->attack(*werewolfSecond);
    werewolfFirst->description();
    werewolfSecond->description();

    std::cout << "\n-----------Werewolf transform------------\n" << std::endl;
    werewolfFirst->transform();
    werewolfFirst->description();


//WIZARD TEST

    std::cout << "\n-----------Attack(Wizard-Wizard)------------\n" << std::endl;
    wizardSecond->attack(*wizardFirst);
    wizardSecond->description();
    wizardFirst->description();

    std::cout << "\n-----------Attack(Berserker-Wizard)------------\n" << std::endl;
    berserkerSecond->attack(*wizardSecond);
    berserkerSecond->description();
    wizardSecond->description();

    std::cout << "\n-----------Attack(Wizard-Rouge)------------\n" << std::endl;
    wizardFirst->attack(*rogueFirst);
    rogueSecond->description();
    wizardFirst->description();

    std::cout << "\n-----------Magic Attack------------\n" << std::endl;
    std::cout << "\n-----------Attack(Wizard-Wizard) - spell Cruciatus------------\n" << std::endl;
    wizardSecond->castSpell("Cruciatus", *wizardFirst);
    wizardSecond->description();
    wizardFirst->description();

    std::cout << "\n-----------Spell(Wizard) - HealthRecovery------------\n" << std::endl;
    wizardFirst->castSpell("HealthRecovery");
    wizardFirst->description();

    std::cout << "\n-----------Attack(Wizard-Wizard) - AvadaKedavra------------\n" << std::endl;
    wizardFirst->castSpell("AvadaKedavra", *healerFirst);
    wizardFirst->description();
    healerFirst->description();


//WARLOCK TEST

    std::cout << "\n-----------attack(Warlock-Berseker)------------\n" << std::endl;
    warlockSecond->attack(*berserkerSecond);
    warlockSecond->description();
    berserkerSecond->description();

    std::cout << "\n-----------HealthRecovery(HEALER)------------\n" << std::endl;
    warlockSecond->castSpell("HealthRecovery");
    warlockSecond->description();

    std::cout << "\n-----------Spell(Werewolf-Demon)------------\n" << std::endl;

    Demon* demonFirst = warlockFirst->castSpell("SummonDemon", "DemonFirst");
    demonFirst->description();
    werewolfFirst->attack(*demonFirst);
    werewolfFirst->description();
    demonFirst->description();
    warlockFirst->description();

    std::cout << "\n-----------Demon Transform------------\n" << std::endl;
    demonFirst->transform();
    demonFirst->description();

    std::cout << "\n-----------Spell(Demon-Soldier)------------\n" << std::endl;

    Demon* demonSecond = warlockFirst->castSpell("SummonDemon", "DemonSecond");
    demonSecond->description();
    demonSecond->superAttack(*priestFirst);
    demonSecond->description();
    priestFirst->description();
    warlockFirst->description();


//HEALER TEST

    std::cout << "\n-----------melleAttack(HEALER-Wizard)------------\n" << std::endl;
    healerSecond->attack(*wizardFirst);
    wizardFirst->description();
    healerSecond->description();

    std::cout << "\n-----------HealthRecovery(HEALER)------------\n" << std::endl;
    healerSecond->castSpell("HealthRecovery");
    healerSecond->description();

    std::cout << "\n-----------Spell(HEALER-Vampire)------------\n" << std::endl;
    healerSecond->castSpell("Cruciatus", *vampireSecond);
    healerSecond->description();
    vampireSecond->description();


//PRIEST TEST

    std::cout << "\n-----------Attack(Rogue-Priest)------------\n" << std::endl;
    rogueSecond->attack(*priestFirst);
    priestFirst->description();
    rogueSecond->description();

    std::cout << "\n-----------Attack(Priest-Bercerker)------------\n" << std::endl;
    priestFirst->attack(*berserkerSecond);
    berserkerSecond->description();
    priestFirst->description();

    std::cout << "\n-----------Magic Attack------------\n" << std::endl;
    std::cout << "\n-----------Spell(Priest) - HealthRecovery------------\n" << std::endl;
    priestFirst->castSpell("HealthRecovery");
    priestFirst->description();


    std::cout << "\n-----------Attack(Priest-Vampipe) - spell Cruciatus------------\n" << std::endl;
    priestSecond->castSpell("Cruciatus", *vampireSecond);
    priestSecond->description();
    vampireSecond->description();

    std::cout << "\n-----------Spell(Priest) - HealthRecovery------------\n" << std::endl;
    priestFirst->castSpell("HealthRecovery");
    priestFirst->description();

    std::cout << "\n-----------Attack(Wizard-Soldier(Wolf)) - Cruciatus------------\n" << std::endl;
    priestSecond->castSpell("Cruciatus", *soldierFirst);
    priestSecond->description();
    soldierFirst->description();


    delete soldierFirst;
    delete soldierSecond;

    delete vampireFirst;
    delete vampireSecond;

    delete rogueFirst;
    delete rogueSecond;

    delete werewolfFirst;
    delete werewolfSecond;

    delete berserkerFirst;
    delete berserkerSecond;

    delete wizardFirst;
    delete wizardSecond;

    delete warlockFirst;
    delete warlockSecond;

    delete healerFirst;
    delete healerSecond;

    delete priestFirst;
    delete priestSecond;

    delete necromancerFirst;
    delete necromancerSecond;

    return 0;
}
