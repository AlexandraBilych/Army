.PHONY: all

all: main

main: Unit.o Soldier.o Ability.o BaseAttack.o SoldierState.o State.o Werewolf.o Wolf.o WolfState.o WolfAbility.o main.cpp
	g++ main.cpp Unit/Unit.o Unit/Soldier.o State/SoldierState.o State/State.o Ability/Ability.o Unit/Werewolf.o State/WolfState.o Unit/Wolf.o Ability/WolfAbility.o Ability/BaseAttack.o -o main

Werewolf.o:
	g++ -c Unit/Werewolf.cpp -o Unit/Werewolf.o

Wolf.o:
	g++ -c Unit/Wolf.cpp -o Unit/Wolf.o

Ability.o:
	g++ -c Ability/Ability.cpp -o Ability/Ability.o

WolfAbility.o:
	g++ -c Ability/WolfAbility.cpp -o Ability/WolfAbility.o

BaseAttack.o:
	g++ -c Ability/BaseAttack.cpp -o Ability/BaseAttack.o

State.o:
	g++ -c State/State.cpp -o State/State.o

SoldierState.o:
	g++ -c State/SoldierState.cpp -o State/SoldierState.o

WolfState.o:
	g++ -c State/WolfState.cpp -o State/WolfState.o

Unit.o:
	g++ -c Unit/Unit.cpp -o Unit/Unit.o

Soldier.o:
	g++ -c Unit/Soldier.cpp -o Unit/Soldier.o

.PHONY: clean

clean:
	rm -rf *.o Unit/*.o Ability/*.o
