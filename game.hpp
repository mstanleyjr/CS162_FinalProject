


#ifndef GAME_HPP
#define GAME_HPP


#include "floor.hpp"
#include "space.hpp"
#include "wall.hpp"
#include "door.hpp"

class Game
{
private:
		Space*** brewery;
		int days;


	public:
		Game();
		~Game();
		void printBrewery();
		void setPointers(int, int);

};

#endif
