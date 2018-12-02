


#include "game.hpp"
#include "space.hpp"
#include "floor.hpp"

int main()

{
	shared_ptr<Space>() spaces[10];
	for(int i = 0; i < 10; i++)
	{
		cout << spaces[i]->getName();
		cout << endl;
	}
	return 0;
}
