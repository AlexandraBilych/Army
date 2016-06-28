#include "Header.h"
#include <iostream>

int main() {
    Soldier* s = new Soldier("Rick", 100, 50);
    s->description();


//SOLDIER TEST

    // Soldier* a = new Soldier("Bran", 100, 20);

    // a->description();

    // // std::cout << "\n-----------Attack(Soldier-Soldier)------------\n" << std::endl;
    // s->attack(a);
    // s->description();
    // a->description();

    // // std::cout << "\n-----------Attack(Soldier-Soldier)------------\n" << std::endl;
    // a->attack(s);
    // s->description();
    // a->description();


// VAMPIRE TEST

    // Vampire* v = new Vampire("Dragun", 100, 30);
    // v->description();

    // std::cout << "\n-----------Attack(Wolf-Vampire)------------\n" << std::endl;
    // s->transform();
    // v->attack(s);
    // s->attack(v);
    // v->description();
    // s->description();

    // std::cout << "\n-----------Attack(Soldier-Vampire)------------\n" << std::endl;
    // s->attack(v);
    // v->description();
    // s->description();

    // std::cout << "\n-----------Attack(Vampire-Soldier(Vampire))------------\n" << std::endl;
    // v->attack(s);
    // v->description();
    // s->description();

    // std::cout << "\n-----------Attack(Soldier-Vampire)------------\n" << std::endl;
    // s->attack(v);
    // v->description();
    // s->description();



// ROGUE TEST

    // Rogue* r = new Rogue("Briena", 150, 30);
    // r->description();
    // // std::cout << "\n-----------Attack(w-r)------------\n" << std::endl;
    // // w->attack(r);
    // // r->description();
    // // r->transform();
    // // r->description();
    // // r->transform();

    // std::cout << "\n-----------Attack(r-s)------------\n" << std::endl;
    // r->attack(s);
    // r->description();
    // s->description();

    // std::cout << "\n-----------Attack(s-r)------------\n" << std::endl;
    // s->attack(r);
    // r->description();
    // s->description();

// WERWOLF TEST

    // Werewolf* w = new Werewolf("Gara", 150, 20);
    // w->description();
    // w->transform();
    // std::cout << "\n-----------Werewolf transform------------\n" << std::endl;
    // w->description();

    // std::cout << "\n-----------Attack(s-w)------------\n" << std::endl;
    // s->attack(w);
    // w->description();
    // s->description();
    // s->transform();
    // s->description();

    // std::cout << "\n-----------Attack(w-s)------------\n" << std::endl;
    // w->attack(s);
    // w->description();
    // w->transform();
    // w->description();

    // s->description();
    // s->transform();
    // s->description();

    // Soldier* news = new Soldier("Bran", 100, 10);
    // news->description();

    // std::cout << "\n-----------Attack(s(w)-s)------------\n" << std::endl;
    // s->attack(news);

    // s->description();
    // news->description();
    // news->transform();
    // news->description();

    // delete w;

//WEREWOLF - ROGUE -- VAMPIRE

    // Werewolf* w = new Werewolf("Gara", 150, 20);
    // w->description();
    // w->transform();
    // std::cout << "\n-----------Werewolf transform------------\n" << std::endl;
    // w->description();

    // Rogue* r = new Rogue("Briena", 150, 30);
    // r->description();

    // Vampire* v = new Vampire("Dragun", 100, 30);
    // v->description();

    // std::cout << "\n-----------Attack(ROGUE-WEREWOLF)------------\n" << std::endl;
    // r->attack(w);
    // w->description();
    // r->description();

    // std::cout << "\n-----------Attack(ROGUE-VAMPIRE)------------\n" << std::endl;
    // r->attack(v);
    // v->description();
    // r->description();

    // std::cout << "\n-----------Attack(WEREWOLF - ROGUE)------------\n" << std::endl;
    // w->attack(r);
    // w->description();
    // r->description();
    // r->transform();
    // r->description();

    // std::cout << "\n-----------Attack(ROGUE-VAMPIRE)------------\n" << std::endl;
    // r->attack(v);
    // v->description();
    // r->description();

    // std::cout << "\n-----------Attack(VAMPIRE - ROGUE)------------\n" << std::endl;
    // v->attack(r);
    // r->description();
    // v->description();

    // std::cout << "\n-----------Attack(ROGUE-WEREWOLF)------------\n" << std::endl;
    // r->attack(w);
    // w->description();
    // r->description();

    // delete w;
    // delete r;
    // delete v;

//WIZARD TEST

    // Wizard* wiz = new Wizard("Gendelf", 100, 5, 70);

    // wiz->addSpell(AvadaKedavra::createSpell());

    // wiz->description();
    // // wiz->showSpellBook();


    // std::cout << "\n-----------Attack(Wizard-Wizard)------------\n" << std::endl;
    // Wizard* wiz2 = new Wizard("Demon", 100, 8, 30);


    // // wiz2->description();
    // // wiz2->melleAttack(wiz);
    // // wiz2->description();
    // // wiz->description();

    // // std::cout << "\n-----------Attack(Wizard-Wizard)------------\n" << std::endl;
    // // wiz->attack(wiz2);
    // // wiz2->description();
    // // wiz->description();


    // // std::cout << "\n-----------Attack(Soldier-Wizard)------------\n" << std::endl;
    // // s->attack(wiz);
    // // s->description();
    // // wiz->description();

    // //     // std::cout << "\n-----------Attack(Wizard-Soldier)------------\n" << std::endl;
    // // wiz->melleAttack(s);
    // // s->description();
    // // wiz->description();

    // std::cout << "\n-----------Magic Attack------------\n" << std::endl;

    // Wizard* wiz2 = new Wizard("Demon", 100, 8, 50);
    // wiz2->addSpell("Cruciatus",new Cruciatus());
    // wiz->addSpell("HealthRecovery",new HealthRecovery());
    // wiz->showSpellBook();

    // wiz2->description();
    // std::cout << "\n-----------Attack(Wizard-Wizard) - spell Cruciatus------------\n" << std::endl;
    // wiz2->spell("Cruciatus", wiz);
    // wiz2->description();
    // wiz->description();

    // std::cout << "\n-----------Spell(Wizard) - HealthRecovery------------\n" << std::endl;
    // wiz->spell("HealthRecovery");
    // wiz->description();

    // std::cout << "\n-----------Attack(Wizard-Wizard) - AvadaKedavra------------\n" << std::endl;
    // wiz->spell("AvadaKedavra", wiz2);
    // wiz2->description();
    // wiz->description();

    // std::cout << "\n-----------Attack(Wizard-Soldier) - spell AvadaKedavra------------\n" << std::endl;
    // wiz->spell("AvadaKedavra", s);
    // s->description();
    // wiz->description();

    // delete wiz2;



    // delete wiz;

//WARLOCK TEST

    // Warlock* war = new Warlock("Master", 150, 10, 60);
    // war->addSpell(Cruciatus::createSpell());
    // war->addSpell(HealthRecovery::createSpell());
    // war->addSpell(HealthRecovery::createSpell());

    // war->description();
    // war->showSpellBook();

    // std::cout << "\n-----------melleAttack(HEALER-Wizard)------------\n" << std::endl;
    // war->melleAttack(wiz);
    // wiz->description();
    // war->description();

    // std::cout << "\n-----------HealthRecovery(HEALER)------------\n" << std::endl;
    // war->spell("HealthRecovery");
    // war->description();

    // std::cout << "\n-----------spell(Wizard-HEALER)------------\n" << std::endl;
    // wiz->spell("AvadaKedavra", war);
    // wiz->description();
    // war->description();

    // std::cout << "\n-----------Attack(Soldier-HEALER)------------\n" << std::endl;
    // s->attack(war);
    // s->description();
    // war->description();

    // std::cout << "\n-----------Spell(Werewolf-Demon)------------\n" << std::endl;

    // Demon* d = war->spell("SummonDemon", "Neyton");
    // d->description();
    // w->attack(d);
    // d->description();
    // w->description();
    // war->description();

    // std::cout << "\n-----------Spell(HEALER-Soldier)------------\n" << std::endl;

    // Demon* d = war->spell("SummonDemon", "Neyton");
    // d->description();
    // d->superAttack(s);
    // d->description();
    // s->description();
    // war->description();

//HEALER TEST

    // Healer* h = new Healer("Doctor", 150, 5, 100);
    // h->addSpell("Cruciatus", new Cruciatus());
    // h->addSpell("HealthRecovery", new HealthRecovery);

    // h->description();
    // h->showSpellBook();

    // std::cout << "\n-----------melleAttack(HEALER-Wizard)------------\n" << std::endl;
    // h->melleAttack(wiz);
    // wiz->description();
    // h->description();

    // std::cout << "\n-----------HealthRecovery(HEALER)------------\n" << std::endl;
    // h->spell("HealthRecovery");
    // h->description();

    // std::cout << "\n-----------spell(Wizard-HEALER)------------\n" << std::endl;
    // wiz->spell("AvadaKedavra", h);
    // wiz->description();
    // h->description();

    // std::cout << "\n-----------Attack(Soldier-HEALER)------------\n" << std::endl;
    // s->attack(h);
    // s->description();
    // h->description();

    // std::cout << "\n-----------Spell(HEALER-Soldier)------------\n" << std::endl;
    // h->spell("Cruciatus", s);
    // s->description();
    // h->description();


//PRIEST TEST

    Priest* pr = new Priest("Papa", 100, 10, 70);

    pr->addSpell(AvadaKedavra::createSpell());
    pr->addSpell(HealthRecovery::createSpell());

    pr->description();
    pr->showSpellBook();

    std::cout << "\n-----------Attack(Soldier-Priest)------------\n" << std::endl;
    s->attack(pr);
    s->description();
    pr->description();

    std::cout << "\n-----------Attack(Priest-Soldier)------------\n" << std::endl;
    pr->melleAttack(s);
    s->description();
    pr->description();

    std::cout << "\n-----------Magic Attack------------\n" << std::endl;

    Wizard* wiz = new Wizard("Demon", 100, 8, 50);

    wiz->description();
    std::cout << "\n-----------Attack(Priest-Wizard) - spell Cruciatus------------\n" << std::endl;
    pr->spell("Cruciatus", wiz);
    wiz->description();
    pr->description();

    // std::cout << "\n-----------Spell(Priest) - HealthRecovery------------\n" << std::endl;
    // pr->spell("HealthRecovery");
    // pr->description();

    Vampire* vam = new Vampire("Dragula", 130, 30);
    vam->description();

    std::cout << "\n-----------Attack(Wizard-Vampire) - AvadaKedavra------------\n" << std::endl;
    pr->spell("AvadaKedavra", vam);
    pr->description();
    vam->description();

    std::cout << "\n-----------Attack(Priest-Soldier)------------\n" << std::endl;
    pr->spell("AvadaKedavra", s);
    s->description();
    pr->description();

    // std::cout << "\n-----------Attack(Wizard-Soldier) - spell AvadaKedavra------------\n" << std::endl;
    // wiz->spell("AvadaKedavra", s);
    // s->description();
    // wiz->description();

    delete pr;
    delete wiz;

//BERSERKER TEST

    // Berserker* b = new Berserker("Crazy", 200, 20);
    // Wizard* wiz = new Wizard("Gendelf", 100, 5, 30);
    // wiz->addSpell("Cruciatus",new Cruciatus());

    // b->description();

    // std::cout << "\n-----------Attack(Soldier-Berserker)------------\n" << std::endl;
    // s->attack(b);
    // s->description();
    // b->description();

    // std::cout << "\n-----------Attack(Berserker-Soldier)------------\n" << std::endl;
    // b->attack(s);
    // s->description();
    // b->description();

    // wiz->description();

    // std::cout << "\n-----------Attack(Wizard-Berserker)------------\n" << std::endl;
    // wiz->attack(b);
    // wiz->description();
    // b->description();

    // std::cout << "\n-----------Attack(Wizard-Berserker) -- Spell Cruciatus------------\n" << std::endl;
    // wiz->spell("Cruciatus", b);
    // wiz->description();
    // b->description();

    // std::cout << "\n-----------Attack(Berserker-Wizard)------------\n" << std::endl;
    // b->attack(wiz);
    // wiz->description();
    // b->description();

    // delete b;
    // delete wiz;




    delete s;


    return 0;
}
