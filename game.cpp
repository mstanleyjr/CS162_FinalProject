


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

//	for(int i = 0; i < 10; i++)
//	{
//
//		brewery[i] = make_shared<Floor>();
//	}
	cout << "game created" << endl;
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
