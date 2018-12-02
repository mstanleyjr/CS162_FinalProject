


#include "wall.hpp"

Wall::Wall()
{
	setName("  |  ");
}

Wall::Wall(int x, int y)
{
	setName("  |  ");
	setXCoord(x);
	setYCoord(y);
}

void Wall::makeCeiling()
{
	setName("-----");
}
