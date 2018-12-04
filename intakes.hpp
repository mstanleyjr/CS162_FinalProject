


#ifndef INTAKES_HPP
#define INTAKES_HPP

#include "space.hpp"

class Intakes : public Space
{

	public:
		Intakes();
		Intakes(int, int);
		virtual void makeCeiling() override;
		virtual void action() override;

};

#endif
