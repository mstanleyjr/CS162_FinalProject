/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the header file for Floor, which is used in traversal of
** the gameboard.
*******************************************************************************/


#ifndef FLOOR_HPP
#define FLOOR_HPP

#include "space.hpp"

class Floor : public Space
{
	public:
		Floor();
		Floor(int, int);
		virtual void makeCeiling() override;
};

#endif
