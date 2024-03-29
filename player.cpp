/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the source code for the player object. This is used by
** the user to traverse the brewery and holds items that the user can pick up and use 
*******************************************************************************/

#include "player.hpp"

Player::Player()
{
	setName("Mike");
	setFilled(true);
	setActionable(true);
	full = false;

}

Player::Player(int x, int y) : Space(x, y)
{
	setName("Mike ");
	setFilled(true);
	setActionable(true);
	full = false;

}

Player::~Player()
{

}

void Player::makeCeiling()
{

}

void Player::addItem(string s)
{
	items.push_back(s);
	full = true;

}

void Player::removeItem()
{
	if(!items.empty())
	{

		items.pop_back();
		full = false;
	}
}

void Player::printItems()
{
	if(!items.empty())
	{
		cout << items.front() << endl;
	}
	else
	{
		cout << "None" << endl;
	}
}

string Player::getItem()
{
	if(full)
	{
		string s = items.front() ;

		return s;
	}
	else
	{
		return "";
	}
}

bool Player::hasItem()
{
	if(!items.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}
