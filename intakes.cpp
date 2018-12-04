

#include "intakes.hpp"

Intakes::Intakes()
{
	setName("Intake");
	setFilled(true);
	setActionable(true);
}

Intakes::Intakes(int x, int y) : Space (x, y)
{
	setName("Intake");
	setFilled(true);
	setActionable(true);
}

void Intakes::makeCeiling()
{

}

void Intakes::action()
{
	cout << "You have put the ingredients in " << this->getName() << endl;
	cout << "Please interact with either the MashT or BrewK" << endl;
}
