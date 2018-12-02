


#ifndef GAME_HPP
#define GAME_HPP


#include "floor.hpp"
#include "space.hpp"

class Game
{
private:
		Space*** brewery;


	public:
		Game();
		~Game();
		void printBrewery();

};

#endif
