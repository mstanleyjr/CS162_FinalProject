


#ifndef DOOR_HPP
#define DOOR_HPP

#include "space.hpp"

class Door : public Space
{
	private:
		bool leave;

	public:
		Door();
		Door(int, int);
		virtual void makeCeiling() override;
		void exitBrewhouse();
		virtual bool didLeave() override;
};

#endif
