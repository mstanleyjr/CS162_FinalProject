


#include "space.hpp"

Space::Space()
{

	setNorth(NULL);
	setSouth(NULL);
	setEast(NULL);
	setWest(NULL);
	setName("Space");
	setActionable(false);
	setFilled(false);
	setContents("None");
	setXCoord(-1);
	setYCoord(-1);
}

Space::Space(int x, int y)
{
	setXCoord(x);
	setYCoord(y);
	setNorth(NULL);
	setSouth(NULL);
	setEast(NULL);
	setWest(NULL);
	setName("Space");
	setActionable(false);
	setFilled(false);
	setContents("None");


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
	return north;
}

Space* Space::getSouth()
{
	return south;
}

Space* Space::getEast()
{
	return east;
}

Space* Space::getWest()
{
	return west;
}

string Space::getName()
{

	return name;
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
