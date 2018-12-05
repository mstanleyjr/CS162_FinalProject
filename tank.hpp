/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the header file for the tank class. These are used to keep
** track of days in tanks for FV and BBT as they can only move after certain amounts of time.
*******************************************************************************/



#ifndef TANK_HPP
#define TANK_HPP

#include "space.hpp"

class Tank : public Space
{
	private:
		int daysIn;
		int daysNeeded;
		bool canMove;

	public:
		Tank();
		Tank(int, int);
		virtual void makeCeiling() override;
		virtual void action() override;
		virtual void printContents() override;
		void setDaysNeeded(int);
		int getDaysNeeded();
		void setDaysIn(int);
		int getDaysIn();
		void addDay();
		bool getMovable();
		void setMovable(bool);

};

#endif
