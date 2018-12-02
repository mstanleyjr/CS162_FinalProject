


#include "game.hpp"

Game::Game()

{
	brewery = new Space**[10];
	for(int i = 0; i < 10; i++)
	{
		brewery[i] = new Space*[7];
	}
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			brewery[i][j] = new Space();
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
	brewery = NULL:
}

void Game::printBrewery()
{
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
