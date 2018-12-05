/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the source code for the floor class. It is derived of Space
** and is mostly used to create blank space where the user can "walk"
*******************************************************************************/

#include "floor.hpp"

Floor::Floor()
{
	setName("     ");
}

Floor::Floor(int x, int y) : Space(x, y)
{
	setName("     ");
}

void Floor::makeCeiling()
{

}
