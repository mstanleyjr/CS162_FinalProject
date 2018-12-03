

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

void Ingredient::action();
{
	cout << "Still working that " << endl;
}

void printList()
{
	if(this->list.size() > 0)
	{
		for(int i = 0; i < this->list.size(); i++)
		{
			cout << i + 1 << ": " << this->list[i] << endl;
		}
	}
}

string Ingredient::returnIngredient(int x)
{
	if(list.size() > 0 && (x - 1) < list.size())
	{
		return list[x - 1];
	}
}

void Ingredient::addIngredient(string s)
{
	list.push_back(s);
}
