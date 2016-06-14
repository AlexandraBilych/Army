#include "Unit/Soldier.h"
#include "State/SoldierState.h"
#include "Unit/Werewolf.h"
#include <iostream>

int main() {
    Soldier* i = new Soldier("Ivan", 100, 100, 40);
    // Soldier* s = new Soldier("Alex", 100, 100, 40);
    // Soldier* s = new Soldier("Sasha", 100, 100, 50);
    i->description();
    // s->description();

    // i->description();
    // s->description();
    // s->attack(i);
    // i->description();
    // s->description();


    Werewolf* w = new Werewolf("Gara", 100, 100, 20);
    w->description();
    w->transform();
    w->description();

    std::cout << "\n-----------Attack(w-s)------------\n" << std::endl;
    // i->attack(w);
    i->attack(w);

    i->description();
    i->transform();
    i->description();

    w->description();
    w->transform();
    w->description();
    // i->description();
    std::cout << "\n-----------Attack(s-w)------------\n" << std::endl;
    i->attack(w);
    w->description();
    w->transform();
    w->description();


    delete w;
    // delete s;
    delete i;

    return 0;
}
