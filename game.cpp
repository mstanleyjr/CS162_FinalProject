


#include "game.hpp"

Game::Game()
{
	brewery[10];
	for(int i = 0; i < 10; i++)
	{
		brewery[i] = new shared_ptr<Space>();
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
		cout << "in Print Brewery" << endl;
		cout << this->brewery[i]->getName();
	}
	cout << endl;
}
