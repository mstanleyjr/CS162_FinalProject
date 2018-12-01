


#include "game.hpp"

Game::Game()
{
	for (int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			shared_ptr<Floor> f1 = Floor(i, j);
			brewery[i][j] = f1;
		}
	}
}

void Game::printBrewery()
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			cout << brewery[i][j]->getName;
		}
		cout << endl;
	}
	cout << endl;
}
