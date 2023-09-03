all: compile
	./a.out

compile:
	g++ $(wildcard src/*.cpp) -o a.out -lcurl