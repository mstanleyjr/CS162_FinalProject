


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

void Space::addContents(string c)
{
	list.push_back(c);
}

void Space::printContents()
{
	if(this->list.size() > 0)
	{
		for(int i = 0; i < this->list.size(); i++)
		{
			cout << i + 1 << ": " << this->list[i] << endl;
		}
	}
}

string Space::getContents()
{
	if(this->list.size() > 0)
	{
		cout << "Please select from the following: " << endl;
		this->printContents();
		int decision = checkValidity(1, 4);
		return list[decision - 1];
	}
	else if (!(this->list.size() > 0))
	{
		cout << "There are not items here" << endl;
		return "";
	}

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

bool Space::didLeave()
{
	return false;
}

void Space::action()
{

}


int Space::checkValidity(int lower, int upper)
{
	string getter;
	bool isValid = false;
	bool isNegative = false;

	do
	{
		cout << "Please enter your selection: " << endl;
		getline(cin, getter);
		for(int i = 0; i < getter.length(); i++)
		{
			//If hyphen is in front of int, adjust bool flag
			if(getter[0] == '-' && !isNegative)
			{
				isNegative = true;
				i++;
			}

			//Check all other chars or digit
			if(!(isdigit(getter[i])))
			{
				isValid = false;
				break;
			}
			else
			{
				isValid = true;
			}
		}

		//If it is a digit, break
		if(isValid)
		{
			break;
		}

		cin.clear();
		cout << "Input not valid" << endl;
	} while (!isValid);

	//Convert to int and determine if it is in range
	if(isNegative)
	{
		getter = getter.substr(1, (getter.length() - 1));
	}

	int userInput = stoi(getter);

	if(isNegative)
	{
		userInput *= -1;
	}

	if(userInput >= lower && userInput <= upper)
	{
		isValid = true;
	}
	else
	{
		cout << "Please enter a number between " << lower << " and " << upper << endl;
		cin.clear();
		userInput = checkValidity(lower, upper);
	}

	return userInput;
}
