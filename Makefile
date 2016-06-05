.PHONY: all

all: main

main: Unit.o Soldier.o Ability.o BaseAttack.o SoldierState.o State.o main.cpp
	g++ main.cpp Unit/Unit.o Unit/Soldier.o State/SoldierState.o State/State.o Ability/Ability.o Ability/BaseAttack.o -o main

Ability.o:
	g++ -c Ability/Ability.cpp -o Ability/Ability.o

BaseAttack.o:
	g++ -c Ability/BaseAttack.cpp -o Ability/BaseAttack.o

State.o:
	g++ -c State/State.cpp -o State/State.o

SoldierState.o:
	g++ -c State/SoldierState.cpp -o State/SoldierState.o

Unit.o:
	g++ -c Unit/Unit.cpp -o Unit/Unit.o

Soldier.o:
	g++ -c Unit/Soldier.cpp -o Unit/Soldier.o

.PHONY: clean

clean:
	rm -rf *.o Unit/*.o Ability/*.o
