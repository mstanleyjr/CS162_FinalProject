


#include "menu.hpp"

int main()

{
	Menu m1;
	int start = m1.startMenu();
	if(start == 1)
	{
		do{
			m1.mainMenu();
		}while (m1.endMenu());
	}

	return 0;
}
