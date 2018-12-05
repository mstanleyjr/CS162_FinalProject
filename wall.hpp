/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the header for the wall object. Derived of the space class.
*******************************************************************************/

#ifndef WALL_HPP
#define WALL_HPP

#include "space.hpp"

class Wall : public Space
{
	public:
		Wall();
		Wall(int, int);
		virtual void makeCeiling() override;

};

#endif
