.PHONY: all

all: main

main: Unit.o Wolf.o Werewolf.o Soldier.o Rogue.o Vampire.o AbstractVampire.o \
	Ability.o BaseAttack.o WolfAbility.o RogueAbility.o VampireAbility.o\
	State.o SoldierState.o WolfState.o RogueState.o VampireState.o
	g++ main.cpp Unit/Unit.o Unit/Wolf.o Unit/Soldier.o Unit/Werewolf.o Unit/Rogue.o Unit/Vampire.o Unit/AbstractVampire.o \
		State/State.o State/WolfState.o State/SoldierState.o State/RogueState.o State/VampireState.o \
		Ability/Ability.o Ability/WolfAbility.o Ability/BaseAttack.o Ability/RogueAbility.o Ability/VampireAbility.o -o main

Unit.o:
	g++ -c Unit/Unit.cpp -o Unit/Unit.o

Werewolf.o:
	g++ -c Unit/Werewolf.cpp -o Unit/Werewolf.o

Wolf.o:
	g++ -c Unit/Wolf.cpp -o Unit/Wolf.o

Rogue.o:
	g++ -c Unit/Rogue.cpp -o Unit/Rogue.o

Vampire.o:
	g++ -c Unit/Vampire.cpp -o Unit/Vampire.o

AbstractVampire.o:
	g++ -c Unit/AbstractVampire.cpp -o Unit/AbstractVampire.o

BaseAttack.o:
	g++ -c Ability/BaseAttack.cpp -o Ability/BaseAttack.o

Soldier.o:
	g++ -c Unit/Soldier.cpp -o Unit/Soldier.o

Ability.o:
	g++ -c Ability/Ability.cpp -o Ability/Ability.o

WolfAbility.o:
	g++ -c Ability/WolfAbility.cpp -o Ability/WolfAbility.o

RogueAbility.o:
	g++ -c Ability/RogueAbility.cpp -o Ability/RogueAbility.o

VampireAbility.o:
	g++ -c Ability/VampireAbility.cpp -o Ability/VampireAbility.o

State.o:
	g++ -c State/State.cpp -o State/State.o

SoldierState.o:
	g++ -c State/SoldierState.cpp -o State/SoldierState.o

WolfState.o:
	g++ -c State/WolfState.cpp -o State/WolfState.o

RogueState.o:
	g++ -c State/RogueState.cpp -o State/RogueState.o

VampireState.o:
	g++ -c State/VampireState.cpp -o State/VampireState.o

.PHONY: clean

clean:
	rm -rf *.o Unit/*.o Ability/*.o
