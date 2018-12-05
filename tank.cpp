

#include "tank.hpp"

Tank::Tank()
{
	setName("Tank");
	setFilled(true);
	setActionable(false);
	setDaysNeeded(0);
	setDaysIn(0);
	setMovable(false);
}

Tank::Tank(int x, int y) : Space(x, y)
{
	setName("Tank");
	setFilled(true);
	setActionable(false);
	setDaysNeeded(0);
	setDaysIn(0);
	setMovable(false);
}

void Tank::makeCeiling()
{

}

void Tank::action()
{
	if(this->getName() == "MashT")
	{
		cout << "Your mash is a success!!" << endl;
		cout << "The sparge and lauter to BrewK was great!" << endl;
		cout << "Now add hops to Brewk!" << endl;
		this->setActionable(false);
		//This might fail
		Space* brewK = this->getEast();
		brewK->setActionable(true);
	}
}

void Tank::setDaysNeeded(int d)
{
	this->daysNeeded = d;
}

int Tank::getDaysNeeded()
{
	return this->daysNeeded;
}

void Tank::setDaysIn(int d)
{
	this->daysIn = d;
}

int Tank::getDaysIn()
{
	return this->daysIn;
}

void Tank::addDay()
{
	daysIn++;
	if(daysIn >= daysNeeded)
	{
		setMovable(true);
	}
}

bool Tank::getMovable()
{
	return this->canMove;
}

void Tank::setMovable(bool b)
{
	this->canMove = b;
}
