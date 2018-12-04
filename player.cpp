


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

void Player::makeCeiling()
{

}

void Player::addItem(string s)
{
	items.push(s);
	full = true;

}

void Player::removeItem()
{
	if(!items.empty())
	{
		cout << "removing item" << endl;
		items.pop();
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

string Player::useItem()
{
	if(full)
	{
		string s = items.front() ;
		removeItem();
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
