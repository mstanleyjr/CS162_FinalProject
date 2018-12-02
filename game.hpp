


#ifndef GAME_HPP
#define GAME_HPP


#include "floor.hpp"
#include "space.hpp"

class Game
{
private:
		shared_ptr<Space>** brewery;


	public:
		Game();
		void printBrewery();

};

#endif
