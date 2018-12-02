


#include "game.hpp"

Game::Game()
{
	brewery = new shared_ptr<Space>*[10];
	for(int i = 0; i < 10; i++)
	{
		brewery[i] = make_shared<Floor>();
	}

}

void Game::printBrewery()
{
	for(int i = 0; i < 10; i++)
	{
		cout << this->brewery[i]->getName();

	}
	cout << endl;
}
