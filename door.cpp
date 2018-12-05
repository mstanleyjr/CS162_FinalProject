/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the source file for the door class, derived of Space.
** This object class is special because it dictates the time that the user
** has in the game when they leave. 
*******************************************************************************/


#include "door.hpp"

Door::Door()
{
	setName("Door ");
	setFilled(true);
	setActionable(true);
	leave = false;
}

Door::Door(int x, int y) : Space (x, y)
{
	setName("Door ");
	setFilled(true);
	setActionable(true);
	leave = false;
}

void Door::makeCeiling()
{

}

void Door::action()
{
	if(leave == false)
	{
		cout << "Are you sure you would like to exit the brewhouse?" << endl;
		cout << "1 - Yes" << endl << "2 - No" << endl;
		int answer = checkValidity(1, 2);
		if (answer == 1)
		{
			leave = true;
		}
		else
		{
			leave = false;
		}
	}
	else
	{
		leave = false;
	}
}

bool Door::didLeave()
{
	return leave;
}
