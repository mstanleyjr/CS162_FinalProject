/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the header file for the menu class that I use in almost all of
** my projects including its usual checkValidity func
*******************************************************************************/



#ifndef MENU_HPP
#define MENU_HPP

#include "game.hpp"

class Menu
{

	private:
		int checkValidity(int, int);

	public:
		Menu();
		int startMenu();
		void mainMenu();
		bool endMenu();

};

#endif
