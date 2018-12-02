


#ifndef WALL_HPP
#define WALL_HPP

#include "space.hpp"

class Wall : public Space
{
	public:
		Wall();
		virtual void makeCeiling() override;

};

#endif
