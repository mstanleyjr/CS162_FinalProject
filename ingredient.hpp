

#ifndef INGREDIENT_HPP
#define INGREDIENT_HPP

#include "space.hpp"

class Ingredient : public Space
{
	private:
		vector<string> list;


	public:
		Ingredient();
		Ingredient(int, int);
		virtual void makeCeiling() override;
		virtual void action() override;
		void printList();
		string returnIngredient(int);
		void addIngredient(string);
};

#endif
