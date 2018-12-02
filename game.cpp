


#include "game.hpp"

Game::Game()

{
	brewery = new Space*[10];

	for(int i = 0; i < 10; i++)
	{
		brewery[i] = new Space();
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

		cout << this->brewery[i]->getName();
	}
	cout << endl;
}
