

#ifndef TANK_HPP
#define TANK_HPP

#include "space.hpp"

class Tank : public Space
{
	private:
		int daysIn;
		int daysNeeded;
		bool canMove;

	public:
		Tank();
		Tank(int, int);
		virtual void makeCeiling() override;
		virtual void action() override;
		void setDaysNeeded(int);
		int getDaysNeeded();
		void setDaysIn(int);
		int getDaysIn();
		void addDay();
		bool getMovable();
		void setMovable(bool);

};

#endif
