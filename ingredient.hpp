

#ifndef INGREDIENT_HPP
#define INGREDIENT_HPP

#include "space.hpp"

class Ingredient : public Space
{
	private:
		vector<string> list;
		void addIngredient(string);

	public:
		Ingredient();
		Ingredient(int, int);
		virtual void makeCeiling() override;
		virtual void action() override;
		void printList();
		string returnIngredient(int);
};

#endif
