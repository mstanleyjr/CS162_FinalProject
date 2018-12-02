


#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "space.hpp"
#include <vector>
using std::vector;

class Player : public Space
{
	private:
		vector<string> items;
		bool full;

	public:
		Player();
		Player(int, int);
		virtual void makeCeiling() override;
		void addItem(string);
		void removeItem();
		void printItems();
		string useItem();
		bool hasItem();


};

#endif
