

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

void Ingredient::action(Player* b)
{
	if(!b->hasItem())
	{
		cout << "Please select from the following: " << endl;
		printList();
		int decision = checkValidity(1, 4);
		b->addItem(returnIngredient(decision));
	}
	else if (b->hasItem())
	{
		cout << "You are currently holding your capacity" << endl;
		cout << "Would you like to set it down?" << endl;
		cout << "1 = Yes     2 = No" << endl;
		int decision = checkValidity(1, 2);
		if(decision == 1)
		{
			b->removeItem();
		}
	}

}

void Ingredient::printList()
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
