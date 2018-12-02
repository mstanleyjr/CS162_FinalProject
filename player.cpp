


#include "player.hpp"

Player::Player()
{
	setName("Mike");
	setFilled(true);
	setActionable(true);

}

Player::Player(int x, int y) : Space(x, y)
{
	setName("Mike");
	setFilled(true);
	setActionable(true);
}

void Player::makeCeiling()
{

}

void Player::addItem(string s)
{
	items.push_back(s);
}

void Player::removeItem()
{
	items.pop_back();
}

void Player::printItems()
{
	for(int i = 0; i < items.size(); i++)
	{
		cout << items[i] << endl;
	}
}

string Player::useItem()
{
	if(items[0])
	{
		string s = items[0];
		return s;
	}
	else
	{
		return "";
	}
}

bool Player::hasItem()
{
	if(items[0])
	{
		return true;
	}
	else
	{
		return false;
	}
}
