


#include "wall.hpp"

Wall::Wall()
{
	setName("  |  ");
}

Wall::Wall(int x, int y) : Space(x, y)
{
	setName("  |  ");
}

void Wall::makeCeiling()
{
	setName("-----");
}
