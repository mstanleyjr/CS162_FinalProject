/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the main file for the simulator. It calls menu functions
** to begin.
*******************************************************************************/


#include "menu.hpp"

int main()

{
	Menu m1;
	int start = m1.startMenu();
	if(start == 1)
	{
		do{
			m1.mainMenu();
		}while (m1.endMenu());
	}

	return 0;
}
