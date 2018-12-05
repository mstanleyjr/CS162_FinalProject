/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the header file for the player class. It is used to hold
** items for the user and traverse the brewhouse 
*******************************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "space.hpp"


class Player : public Space
{
	private:
		vector<string> items;
		bool full;

	public:

		Player();
		~Player();
		Player(int, int);
		virtual void makeCeiling() override;
		void addItem(string);
		void removeItem();
		void printItems();
		string getItem();
		bool hasItem();




};

#endif
