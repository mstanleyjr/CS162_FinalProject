

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
