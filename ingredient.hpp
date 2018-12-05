/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the source file for the Ingredient class. It is made to
** seperate grains and hops from the other objects.
*******************************************************************************/

#ifndef INGREDIENT_HPP
#define INGREDIENT_HPP

#include "space.hpp"

class Ingredient : public Space
{

	public:
		Ingredient();
		Ingredient(int, int);
		virtual void makeCeiling() override;
		virtual void action() override;

};

#endif
