/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the source file for the menu. It starts by asking the user
** if they would like to play, then plays the game in the mainMenu and then asks
** if the user would like to play again. 
*******************************************************************************/



#include "menu.hpp"

Menu::Menu()
{


}

int Menu::checkValidity(int lower, int upper)
{
	string getter;
	bool isValid = false;
	bool isNegative = false;

	do
	{
		cout << "Please enter your selection: " << endl;
		getline(cin, getter);
		for(int i = 0; i < getter.length(); i++)
		{
			//If hyphen is in front of int, adjust bool flag
			if(getter[0] == '-' && !isNegative)
			{
				isNegative = true;
				i++;
			}

			//Check all other chars or digit
			if(!(isdigit(getter[i])))
			{
				isValid = false;
				break;
			}
			else
			{
				isValid = true;
			}
		}

		//If it is a digit, break
		if(isValid)
		{
			break;
		}

		cin.clear();
		cout << "Input not valid" << endl;
	} while (!isValid);

	//Convert to int and determine if it is in range
	if(isNegative)
	{
		getter = getter.substr(1, (getter.length() - 1));
	}

	int userInput = stoi(getter);

	if(isNegative)
	{
		userInput *= -1;
	}

	if(userInput >= lower && userInput <= upper)
	{
		isValid = true;
	}
	else
	{
		cout << "Please enter a number between " << lower << " and " << upper << endl;
		cin.clear();
		userInput = checkValidity(lower, upper);
	}

	return userInput;
}

void Menu::mainMenu()
{
	cout << endl << "Welcome to Mike's Brewhouse!" << endl << endl;

	cout << "The goal is to make over 50 barrels of beer in 30 days" << endl;
	cout << "To make beer: " << endl;
	cout << "1. Get grain and put it into the mill" << endl;
	cout << "2. Mash / Lauter / Sparge using the Mash Tun" << endl;
	cout << "3. Get hops and throw them into the Brewkettle" << endl;
	cout << "4. Action the Brewkettle to send to an available Fermentation Vessel" << endl;
	cout << "5. After 7 days, transfer to the Brite Beer Tank (if it is empty)" << endl;
	cout << "6. After 3 days in the brite, the beer is ready to keg" << endl;
	cout << "Rinse and repeat! Each batch is 10bbls" << endl;
	cout << endl << "Imporant note: You can only do one major action a day" << endl;
	cout << "Brew, Transfer from FV to BBT or Keg" << endl;
	cout << "Have fun!! " << endl << endl;

	Game g1;
	g1.play();

}

bool Menu::endMenu()
{
	cout << endl << "Please select from the following: " << endl;
	cout << "1. Play Again" << endl;
	cout << "2. Exit " << endl;

	int choice = checkValidity(1, 2);
	if(choice == 2)
	{
		return false;
	}
	else
	{
			return true;
	}
}

int Menu::startMenu()
{
	cout << "Please select from the following: " << endl;
	cout << "1. Play" << endl;
	cout << "2. Exit" << endl;
	int result = checkValidity(1, 2);
	return result;
}
