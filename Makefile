.PHONY: all

CPP_FILES := $(wildcard src/*/*.cpp)
OBJ_FILES := $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))

all: main

main: $(OBJ_FILES)
	g++ $@.cpp $^ -o main

obj/%.o: src/*/%.cpp
	g++ -c -o $@ $<

.PHONY: clean

clean:
	rm -rf obj/*
