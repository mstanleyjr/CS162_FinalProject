


#include "game.hpp"

Game::Game()

{

	
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
		cout << "in Print Brewery" << endl;
		cout << this->brewery[i]->getName();
	}
	cout << endl;
}
