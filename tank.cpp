

#include "tank.hpp"

Tank::Tank()
{
	setName("Tank");
	setFilled(true);
	setActionable(false);
	setDaysNeeded(0);
	setDaysIn(0);
	setMovable(bool);
}

Tank::Tank(int x, int y) : Space(x, y)
{
	setName("Tank");
	setFilled(true);
	setActionable(false);
	setDaysNeeded(0);
	setDaysIn(0);
	setMovable(bool);
}

void Tank::makeCeiling()
{

}

void Tank::action()
{

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
