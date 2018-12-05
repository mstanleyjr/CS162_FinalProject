


#ifndef GAME_HPP
#define GAME_HPP


#include "floor.hpp"
#include "space.hpp"
#include "wall.hpp"
#include "door.hpp"
#include "player.hpp"
#include "ingredient.hpp"
#include "intakes.hpp"
#include "tank.hpp"

class Game
{
private:
		Space*** brewery;
		Player brewer;
		int days;
		int checkValidity(int, int);
		int playerXCoord;
		int playerYCoord;
		int totalBeer;


	public:
		Game();
		~Game();
		void printBrewery();
		void setPointers(int, int);
		void move();
		void setPlayerX(int);
		void setPlayerY(int);
		int getPlayerX();
		int getPlayerY();
		void play();
		Tank ferm1;
		Tank ferm2;
		Tank ferm3;
		Tank ferm4;
		Tank brite;
		void printTanks();
		void daysEnd();


};

#endif
