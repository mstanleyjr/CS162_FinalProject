


#include "door.hpp"

Door::Door()
{
	setName("Door ");
	setFilled(true);
	setActionable(true);
	leave = false;
}

Door::Door(int x, int y) : Space (x, y)
{
	setName("Door ");
	setFilled(true);
	setActionable(true);
	leave = false;
}

void Door::makeCeiling()
{

}

void Door::exitBrewhouse()
{
	leave = true;
}

void Door::action()
{
	exitBrewhouse();
}

bool Door::didLeave()
{
	return leave;
}
