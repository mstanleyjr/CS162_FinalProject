


#include "game.hpp"

Game::Game()
{
	this->brewery = new shared_ptr<Space>[10];
//	for(int i = 0; i < 10; i++)
//	{
//
//		brewery[i] = make_shared<Floor>();
//	}

}

void Game::printBrewery()
{
	for(int i = 0; i < 10; i++)
	{
		shared_ptr<Space> temp = new shared_ptr<Space>;
		temp = this->brewery[i];
		cout << temp->getName();
		delete temp;
	}
	cout << endl;
}
