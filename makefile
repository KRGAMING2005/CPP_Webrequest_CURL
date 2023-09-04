all: compile
	./a.exe

compile:
	g++ $(wildcard src/*.cpp) -lcurl