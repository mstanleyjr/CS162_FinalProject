/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the source for the wall class (which doubles as the ceiling).
** This makes a fence that the user cannot traverse from.
*******************************************************************************/

#include "wall.hpp"

Wall::Wall()
{
	setName("  |  ");
	setFilled(true);
}

Wall::Wall(int x, int y) : Space(x, y)
{
	setFilled(true);
	setName("  |  ");
}

void Wall::makeCeiling()
{
	setName("-----");
}
