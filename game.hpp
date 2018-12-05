/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the header file for the game class. It holds 2d array of space pointers
** for the game board. This will be refreshed every time the player moves. It also holds a
** brewer object to keep track of where the player is and player specific things. There
** are Tank objects to track the days in the tank. It also holds the checkValidity function I often use
** to get the proper inputs from the user 
*******************************************************************************/


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
