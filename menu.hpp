#ifndef MENU_HPP
#define MENU_HPP

#include "game.hpp"

class Menu
{

	private:
		int checkValidity(int, int);

	public:
		Menu();
		int startMenu();
		void mainMenu();
		bool endMenu();

};

#endif
