


#ifndef GAME_HPP
#define GAME_HPP


#include "floor.hpp"

class Game
{
private:
		shared_ptr<Space> brewery[9][6];


	public:
		Game();
		void printBrewery();
		
};

#endif
