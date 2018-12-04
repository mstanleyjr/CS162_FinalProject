


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
	items->push_back(s);
	full = true;

}

void Player::removeItem()
{
	items->pop_back();
	full = false;
}

void Player::printItems()
{
	if(!full)
	{
		for(int i = 0; i < items->size(); i++)
		{
			cout << items[i] << endl;
		}
	}
}

string Player::useItem()
{
	if(items->size() != 0)
	{
		string s = items[0];
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
	if(full)
	{
		return true;
	}
	else
	{
		return false;
	}
}
