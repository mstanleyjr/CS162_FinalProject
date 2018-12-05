

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
	else if(this->getName() == " BBT ")
	{
		this->removeContents();
		cout << "You have kegged your beer!!" << endl;
		this->setActionable(false);
	}
	else
	{
		Space* brite = this->getBBT();
		if(brite->list.empty())
		{
			brite->addContents("Full");
			cout << "You have successfully racked your beer to the Brite Beer Tank" << endl;
			cout << "Beer takes 3 days to ferment" << endl;
			this->removeContents();
			this->setActionable(false);
			if(this->getName() == " FV1 ")
			{
				ferm1.setDaysIn(0);
			}
			if(this->getName() == " FV2 ")
			{
				ferm2.setDaysIn(0);
			}
			if(this->getName() == " FV3 ")
			{
				ferm3.setDaysIn(0);
			}
			if(this->getName() == " FV4 ")
			{
				ferm4.setDaysIn(0);
			}
		}
		else
		{
			cout << "The Brite Beer Tank is full!" << endl;
			cout << "You must keg first!" << endl;
		}
	}
}

void Tank::printContents()
{
	if(this->list.empty())
	{
		cout << "Empty";
	}
	else
	{
		cout << this->list.at(0);
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
