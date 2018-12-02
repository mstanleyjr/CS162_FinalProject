


#include "wall.hpp"

Wall::Wall()
{
	setName("  |  ");
	setFilled(true);
}

Wall::Wall(int x, int y) : Space(x, y)
{
	setFilled(true);
	setName("  |  ");
}

void Wall::makeCeiling()
{
	setName("-----");
}
