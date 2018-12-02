


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
			brewery[i][j] = new Floor();
		}
	}




	for(int c = 0; c < 7; c +=+)
	{
		for(int r = 0; r < 10; r += 9)
		{
			delete brewery[r][c];
			brewery[r][c] = NULL;
			brewery[r][c] = new Wall(r, c);
			brewery[r][c]->makeCeiling();
		}
	}

	for(int r = 0; r < 10; r++)
	{
		for(int c = 0; c < 7; c += 6)
		{
			delete brewery[r][c];
			brewery[r][c] = NULL;
			brewery[r][c] = new Wall(r, c);
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
	brewery = NULL;
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
