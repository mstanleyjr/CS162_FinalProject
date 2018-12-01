


#include "game.hpp"

Game::Game()
{
	for (int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			shared_ptr<Floor> f1;
			brewery[i][j] = f1;
			brewery[i][j]->setXCoord(i);
			brewery[i][j]->setYCoord(j);
		}
	}
}

void Game::printBrewery()
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			string s = brewery[i][j]->getName();
			cout << s;
		}
		cout << endl;
	}
	cout << endl;
}
