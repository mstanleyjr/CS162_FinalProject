


#include "space.hpp"

Space::Space()
{
	setNorth(NULL);
	setSouth(NULL);
	setEast(NULL);
	setWest(NULL);
	setName("");
	setActionable(false);
	setFilled(false);
	setContents("None");
	setXCoord(-1);
	setYCoord(-1);
}

void Space::setNorth(Space* s)
{
	this->north = s;
}

void Space::setSouth(Space* s)
{
	this->south = s;
}

void Space::setEast(Space* s)
{
	this->east = s;
}

void Space::setWest(Space* s)
{
	this->west = s;
}

Space* Space::getNorth()
{
	return this->north;
}

Space* Space::getSouth()
{
	return this->south;
}

Space* Space::getEast()
{
	return this->east;
}

Space* Space::getSouth()
{
	return this->south;
}

string Space::getName()
{
	return this->name;
}

void Space::setName(string n)
{
	this->name = n;
}

bool Space::isActionable()
{
	return this->actionable;
}

void Space::setActionable(bool a)
{
	this->actionable = a;
}

bool Space::isFilled()
{
	return this->filled;
}

void Space::setFilled(bool f)
{
	this->filled = f;
}

void Space::setContents(string c)
{
	this->contains = c;
}

string Space::getContents()
{
	return this->contains;
}

void Space::setXCoord(int x)
{
	this->xCoord = x;
}

int Space::getXCoord()
{
	return this->xCoord;
}

void Space::setYCoord(int y)
{
	this->yCoord = y;
}

int Space::getYCoord()
{
	return this->yCoord;
}
