#include "Unit/Soldier.h"
#include "Unit/Vampire.h"
#include "State/SoldierState.h"
#include "Unit/Werewolf.h"
#include "Unit/Rogue.h"
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
    // delete s;
    // delete r;

    return 0;
}
