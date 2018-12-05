/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the header file for the intake class which will take and "use"
** ingredients from the user.
*******************************************************************************/


#ifndef INTAKES_HPP
#define INTAKES_HPP

#include "space.hpp"

class Intakes : public Space
{

	public:
		Intakes();
		Intakes(int, int);
		virtual void makeCeiling() override;
		virtual void action() override;

};

#endif
