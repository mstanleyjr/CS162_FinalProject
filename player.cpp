


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
	cout << "let's queue: " << endl;
	addItem("Hops bro");
	printItems();
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
		items.pop();
		full = false;
	}
}

void Player::printItems()
{
	while(!items.empty())
	{
		cout << items.front() << endl;
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
