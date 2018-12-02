


#ifndef FLOOR_HPP
#define FLOOR_HPP

#include "space.hpp"

class Floor : public Space
{
	public:
		Floor();
		Floor(int, int);
		virtual void makeCeiling() override;
};

#endif
