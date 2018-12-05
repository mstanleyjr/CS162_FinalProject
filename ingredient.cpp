/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the source file for the ingredient class. This class is
** a child of Space to help differentiate the grain and hops 
*******************************************************************************/

#include "ingredient.hpp"

Ingredient::Ingredient()
{
	setName("Ingredient");
	setFilled(true);
	setActionable(true);

}

Ingredient::Ingredient(int x, int y) : Space (x, y)
{
	setName("Ingredient");
	setFilled(true);
	setActionable(true);
}

void Ingredient::makeCeiling()
{

}

void Ingredient::action()
{


}
