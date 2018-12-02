
FinalProject_Stanley_Michael: floor.o space.o wall.o game.o main.o
	g++ -g -std=c++0x floor.o space.o game.o wall.o main.o -o FinalProject_Stanley_Michael

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

clean:
	rm *.o FinalProject_Stanley_Michael
