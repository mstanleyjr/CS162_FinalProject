


#ifndef GAME_HPP
#define GAME_HPP


#include "floor.hpp"

class Game
{
	prvate:
		shared_ptr<Space> brewery[9][6];


	public:
		Game(); ;This will initialize the board
		void printBrewery();
		; And access and do all funcs
}
