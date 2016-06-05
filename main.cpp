#include "Unit/Soldier.h"
#include "State/SoldierState.h"
#include <iostream>

int main() {
    Soldier* i = new Soldier("Ivan", 100, 100, 40);
    Soldier* s = new Soldier("Sasha", 100, 100, 50);
    i->description();
    s->description();

    i->attack(s);
    i->description();
    s->description();
    s->attack(i);
    i->description();
    s->description();
    s->attack(i);
    s->attack(i);


    return 0;
}
