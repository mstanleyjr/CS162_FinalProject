


#include "floor.hpp"

int main()

{
	Floor f1 = Floor(3, 2);
	cout << f1->getName() << endl;
	cout << f1->getXCoord() << " " << f1->getYCoord() << endl;
	return 0;
}
