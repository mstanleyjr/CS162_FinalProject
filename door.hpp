/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the header file for the door class, derived of Space.
** It allows the user to leave the brewhouse 
*******************************************************************************/


#ifndef DOOR_HPP
#define DOOR_HPP

#include "space.hpp"

class Door : public Space
{
	private:
		bool leave;

	public:
		Door();
		Door(int, int);
		virtual void makeCeiling() override;
		virtual bool didLeave() override;
		virtual void action() override;
};

#endif
