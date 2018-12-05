###############################################################################
## Program Name: Final Project - Brewery Simulator
## Author: Michael Stanley
## Date: 12/4/2018
## Description: This is the makefile for the simulator. It compiles each class
## individually and then all together. It also has a clean function.
###############################################################################


FinalProject_Stanley_Michael: menu.o floor.o tank.o intakes.o ingredient.o player.o door.o space.o wall.o game.o main.o
	g++ -g -std=c++0x menu.o floor.o tank.o intakes.o player.o ingredient.o door.o space.o game.o wall.o main.o -o FinalProject_Stanley_Michael

main.o: main.cpp
	g++ -g -std=c++0x -c main.cpp

floor.o: floor.cpp floor.hpp
	g++ -g -std=c++0x -c floor.cpp

space.o: space.hpp space.cpp
	g++ -g -std=c++0x -c space.cpp

game.o: game.hpp game.cpp
	g++ -g -std=c++0x -c game.cpp

wall.o: wall.hpp wall.cpp
	g++ -g -std=c++0x -c wall.cpp

door.o: door.hpp door.cpp
	g++ -g -std=c++0x -c door.cpp

player.o: player.hpp player.cpp
	g++ -g -std=c++0x -c player.cpp

ingredient.o: ingredient.hpp ingredient.cpp
	g++ -g -std=c++0x -c ingredient.cpp

intakes.o: intakes.hpp intakes.cpp
	g++ -g -std=c++0x -c intakes.cpp

tank.o: tank.hpp tank.cpp
	g++ -g -std=c++0x -c tank.cpp

menu.o: menu.hpp menu.cpp
	g++ -g -std=c++0x -c menu.cpp

clean:
	rm *.o FinalProject_Stanley_Michael
