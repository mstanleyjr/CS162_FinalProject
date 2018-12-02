


#include "game.hpp"

Game::Game()
{
	brewery = new shared_ptr<Floor>**[10];
	for(int i = 0; i < 10; i++)
	{
		brewery[i] = new shared_ptr<Floor>*[7];
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
