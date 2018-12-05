


#include "game.hpp"

Game::Game()

{
	days = 0;
	brewery = new Space**[10];
	for(int i = 0; i < 10; i++)
	{
		brewery[i] = new Space*[7];
	}
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			brewery[i][j] = new Floor(i, j);
		}
	}




	for(int c = 0; c < 7; c++)
	{
		for(int r = 0; r < 10; r += 9)
		{
			delete brewery[r][c];
			brewery[r][c] = NULL;
			brewery[r][c] = new Wall(r, c);
			brewery[r][c]->makeCeiling();
		}
	}

	for(int r = 0; r < 10; r++)
	{
		for(int c = 0; c < 7; c += 6)
		{
			delete brewery[r][c];
			brewery[r][c] = NULL;
			brewery[r][c] = new Wall(r, c);
		}
	}

	//Set Door
	delete brewery[8][3];
	brewery[8][3] = NULL;
	brewery[8][3] = new Door(8, 3);

	//Set Grain
	delete brewery[6][1];
	brewery[6][1] = NULL;
	brewery[6][1] = new Ingredient(6, 1);
	brewery[6][1]->setName("Grain");
	brewery[6][1]->addContents("Marris Otter");
	brewery[6][1]->addContents("Pilsen");
	brewery[6][1]->addContents("Roasted Barley");
	brewery[6][1]->addContents("Crystal 60");

	//Set Hops
	delete brewery[8][1];
	brewery[8][1] = NULL;
	brewery[8][1] = new Ingredient(8, 1);
	brewery[8][1]->setName("Hops ");
	brewery[8][1]->addContents("Simcoe");
	brewery[8][1]->addContents("Citra");
	brewery[8][1]->addContents("Mosaic");
	brewery[8][1]->addContents("Columbus");

	//Set Mill
	delete brewery[3][1];
	brewery[3][1] = NULL;
	brewery[3][1] = new Intakes(3, 1);
	brewery[3][1]->setName("Mill ");

	//Set Brewkettle
	delete brewery[1][3];
	brewery[1][3] = NULL;
	brewery[1][3] = new Intakes(1, 3);
	brewery[1][3]->setName("BrewK");
	brewery[1][3]->setActionable(false);

	//Set Player
	delete brewery[7][3];
	brewery[7][3] = NULL;
	brewery[7][3] = new Player(7, 3);
	setPlayerX(7);
	setPlayerY(3);

	//Set MT
	delete brewery[1][2];
	brewery[1][2] = NULL;
	brewery[1][2] = new Tank(1, 2);
	brewery[1][2]->setName("MashT");


	//Set FV1 - FV4
	for(int i = 1; i < 5; i++)
	{
		delete brewery[i][5];
		brewery[i][5] = NULL;
		brewery[i][5] = new Tank(i, 5);
		string name = " FV" + to_string(i) + " ";
		brewery[i][5]->setName(name);

	}

	//Set KegT
	delete brewery[5][5];
	brewery[5][5] = NULL;
	brewery[5][5] = new Tank(5, 5);
	brewery[5][5]->setName("KegT ");



	for(int r = 0; r < 10; r++)
	{
		for(int c = 0; c < 7; c++)
		{
			setPointers(r, c);
		}
	}


}

Game::~Game()
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			delete brewery[i][j];
		}
		delete[] brewery[i];
	}
	delete[] brewery;
	brewery = NULL;
}

void Game::setPointers(int r, int c)
{
	if(r != 0)
	{
		brewery[r][c]->setNorth(brewery[r - 1][c]);
	}
	if(r != 9)
	{
		brewery[r][c]->setSouth(brewery[r + 1][c]);
	}
	if(c != 0)
	{
		brewery[r][c]->setWest(brewery[r][c - 1]);
	}
	if(c != 6)
	{
		brewery[r][c]->setEast(brewery[r][c + 1]);
	}

}

void Game::printBrewery()
{

	cout << endl;
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 7; j++)
		{
		cout << this->brewery[i][j]->getName();
		}
		cout << endl;
	}
	cout << endl;
}

void Game::move()
{
	cout << "Select your movement direction: " << endl;
	cout << "(1 = Up)(2 = Down)(3 = Left) (4 = Right)" << endl;
	int direction =  checkValidity(1, 4);
	if(direction == 1)
	{
		Space* next = brewery[getPlayerX()][getPlayerY()]->getNorth();
		if(!(next->isFilled()))
		{
			int newX = next->getXCoord();
			int newY = next->getYCoord();
			delete brewery[newX][newY];
			brewery[newX][newY] = brewery[getPlayerX()][getPlayerY()];
			brewery[getPlayerX()][getPlayerY()] = new Floor(getPlayerX(), getPlayerY());
			setPlayerX(newX);
			setPlayerY(newY);
		}
		else if (next->isFilled() && next->isActionable())
		{
			if(next->getName() == "Grain" || next->getName() == "Hops ")
			{
				if(!(brewer.hasItem()))
				{
					string s = next->getContents();
					brewer.addItem(s);
				}
				else
				{
					cout << "You are at capacity, would you like to set your item down?" << endl;
					cout << "1 = Yes     2 = No" << endl;
					int choice = checkValidity(1, 2);
					if (choice == 1)
					{
						brewer.removeItem();
					}
				}
			}
			else if(next->getName() == "Mill " || next->getName() == "BrewK")
			{
				if(brewer.hasItem())
				{
					string s = brewer.getItem();
					if(next->getName() == "Mill ")
					{
						if(s == "Marris Otter" || s == "Pilsen" || s == "Roasted Barley" || s == "Crystal 60")
						{
							brewer.removeItem();
							next->action();
							//Allow BK to be actioned
							brewery[1][3]->setActionable(true);


						}
						else
						{
							cout << "This item is not compatible" << endl;
						}

					}
					else if(next->getName() == "BrewK")
					{
						if(s == "Simcoe" || s == "Citra" || s == "Mosaic" || s == "Columbus")
						{
							brewer.removeItem();
							next->action();
						}
						else
						{
							cout << "This item is not compatible" << endl;

						}
					}
				}
			}
			else
			{
				next->action();
			}

		}
	}
	if(direction == 2)
	{
		Space* next = brewery[getPlayerX()][getPlayerY()]->getSouth();
		if(!(next->isFilled()))
		{
			int newX = next->getXCoord();
			int newY = next->getYCoord();
			delete brewery[newX][newY];
			brewery[newX][newY] = brewery[getPlayerX()][getPlayerY()];
			brewery[getPlayerX()][getPlayerY()] = new Floor(getPlayerX(), getPlayerY());
			setPlayerX(newX);
			setPlayerY(newY);
		}
		else if (next->isFilled() && next->isActionable())
		{
			if(next->getName() == "Grain" || next->getName() == "Hops ")
			{
				if(!(brewer.hasItem()))
				{
					string s = next->getContents();
					brewer.addItem(s);
				}
				else
				{
					cout << "You are at capacity, would you like to set your item down?" << endl;
					cout << "1 = Yes     2 = No" << endl;
					int choice = checkValidity(1, 2);
					if (choice == 1)
					{
						brewer.removeItem();
					}
				}
			}
			else if(next->getName() == "Mill " || next->getName() == "BrewK")
			{
				if(brewer.hasItem())
				{
					string s = brewer.getItem();
					if(next->getName() == "Mill ")
					{
						if(s == "Marris Otter" || s == "Pilsen" || s == "Roasted Barley" || s == "Crystal 60")
						{
							brewer.removeItem();
							next->action();
							//Allow BK to be actioned
							brewery[1][3]->setActionable(true);

						}
						else
						{
							cout << "This item is not compatible" << endl;
						}

					}
					else if(next->getName() == "BrewK")
					{
						if(s == "Simcoe" || s == "Citra" || s == "Mosaic" || s == "Columbus")
						{
							brewer.removeItem();
							next->action();
						}
						else
						{
							cout << "This item is not compatible" << endl;

						}
					}
				}
			}
			else
			{
				next->action();
			}
		}
	}

	if(direction == 3)
	{
		Space* next = brewery[getPlayerX()][getPlayerY()]->getWest();
		if(!(next->isFilled()))
		{
			int newX = next->getXCoord();
			int newY = next->getYCoord();
			delete brewery[newX][newY];
			brewery[newX][newY] = brewery[getPlayerX()][getPlayerY()];
			brewery[getPlayerX()][getPlayerY()] = new Floor(getPlayerX(), getPlayerY());
			setPlayerX(newX);
			setPlayerY(newY);
		}
		else if (next->isFilled() && next->isActionable())
		{
			if(next->getName() == "Grain" || next->getName() == "Hops ")
			{
				if(!(brewer.hasItem()))
				{
					string s = next->getContents();
					brewer.addItem(s);
				}
				else
				{
					cout << "You are at capacity, would you like to set your item down?" << endl;
					cout << "1 = Yes     2 = No" << endl;
					int choice = checkValidity(1, 2);
					if (choice == 1)
					{
						brewer.removeItem();
					}
				}

			}
			else if(next->getName() == "Mill " || next->getName() == "BrewK")
			{
				if(brewer.hasItem())
				{
					string s = brewer.getItem();
					if(next->getName() == "Mill ")
					{
						if(s == "Marris Otter" || s == "Pilsen" || s == "Roasted Barley" || s == "Crystal 60")
						{
							brewer.removeItem();
							next->action();
							//Allow BK to be actioned
							brewery[1][3]->setActionable(true);

						}
						else
						{
							cout << "This item is not compatible" << endl;
						}

					}
					else if(next->getName() == "BrewK")
					{
						if(s == "Simcoe" || s == "Citra" || s == "Mosaic" || s == "Columbus")
						{
							brewer.removeItem();
							next->action();
						}
						else
						{
							cout << "This item is not compatible" << endl;

						}
					}
				}
			}
			else
			{
				next->action();
			}
		}
	}

	if(direction == 4)
	{
		Space* next = brewery[getPlayerX()][getPlayerY()]->getEast();
		if(!(next->isFilled()))
		{
			int newX = next->getXCoord();
			int newY = next->getYCoord();
			delete brewery[newX][newY];
			brewery[newX][newY] = brewery[getPlayerX()][getPlayerY()];
			brewery[getPlayerX()][getPlayerY()] = new Floor(getPlayerX(), getPlayerY());
			setPlayerX(newX);
			setPlayerY(newY);
		}
		else if (next->isFilled() && next->isActionable())
		{
			if(next->getName() == "Grain" || next->getName() == "Hops ")
			{

				if(!(brewer.hasItem()))
				{
					string s = next->getContents();
					brewer.addItem(s);
				}
				else
				{
					cout << "You are at capacity, would you like to set your item down?" << endl;
					cout << "1 = Yes     2 = No" << endl;
					int choice = checkValidity(1, 2);
					if (choice == 1)
					{
						brewer.removeItem();
					}

				}

			}
			else if(next->getName() == "Mill " || next->getName() == "BrewK")
			{
				if(brewer.hasItem())
				{
					string s = brewer.getItem();
					if(next->getName() == "Mill ")
					{
						if(s == "Marris Otter" || s == "Pilsen" || s == "Roasted Barley" || s == "Crystal 60")
						{
							brewer.removeItem();
							next->action();
							//Allow BK to be actioned
							brewery[1][3]->setActionable(true);

						}
						else
						{
							cout << "This item is not compatible" << endl;
						}

					}
					else if(next->getName() == "BrewK")
					{
						if(s == "Simcoe" || s == "Citra" || s == "Mosaic" || s == "Columbus")
						{
							brewer.removeItem();
							next->action();
						}
						else
						{
							cout << "This item is not compatible" << endl;

						}
					}
				}
			}
			else
			{
				next->action();
			}
		}
	}

}

void Game::setPlayerX(int x)
{
	playerXCoord = x;
}

void Game::setPlayerY(int y)
{
	playerYCoord = y;
}

int Game::getPlayerX()
{
	return this->playerXCoord;
}

int Game::getPlayerY()
{
	return this->playerYCoord;
}

int Game::checkValidity(int lower, int upper)
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

void Game::play()
{
	for(days; days < 20; days++)
	{
		cout << "Day " << days + 1 << endl;
		do{

			printBrewery();
			cout << "Inventory: " << endl;
			brewer.printItems();
			move();
			for(int r = 0; r < 10; r++)
			{
				for(int c = 0; c < 7; c++)
				{
					setPointers(r, c);
				}
			}

		} while(!(brewery[8][3]->didLeave()));
		brewery[8][3]->action();
		brewer.removeItem();
		cout << "Would you like to keep playing?" << endl;
		cout << "1 - Yes	    2 - No" << endl;
		int decision = checkValidity(1, 2);
		if(decision == 2)
		{
			days = 20;
		}
	}
}
