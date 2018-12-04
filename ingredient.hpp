

#ifndef INGREDIENT_HPP
#define INGREDIENT_HPP

#include "space.hpp"
#include <memory>
using std::shared_ptr;
using std::make_shared;

#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

class Ingredient : public Space
{
	private:
		vector<string> list;


	public:
		Ingredient();
		Ingredient(int, int);
		virtual void makeCeiling();
		virtual void action();
		void printList();
		string returnIngredient(int);
		void addIngredient(string);
};

#endif
