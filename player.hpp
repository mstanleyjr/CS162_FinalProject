


#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "space.hpp"


class Player : public Space
{
	private:
		queue<string> items;
		bool full;

	public:

		Player();
		~Player();
		Player(int, int);
		virtual void makeCeiling() override;
		void addItem(string);
		void removeItem();
		void printItems();
		string getItem();
		bool hasItem();




};

#endif
