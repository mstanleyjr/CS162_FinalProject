


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
	cout << "Are you sure you would like to exit the brewhouse?" << endl;
	cout << "1 - Yes" << endl << "2 - No" << endl;
	int answer = checkValidity(1, 2);
	if (answer == 1)
	{
		exitBrewhouse();
	}

}

bool Door::didLeave()
{
	return leave;
}
