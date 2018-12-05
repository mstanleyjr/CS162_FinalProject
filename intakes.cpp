

#include "intakes.hpp"

Intakes::Intakes()
{
	setName("Intake");
	setFilled(true);
	setActionable(true);
}

Intakes::Intakes(int x, int y) : Space (x, y)
{
	setName("Intake");
	setFilled(true);
	setActionable(true);
}

void Intakes::makeCeiling()
{

}

void Intakes::action()
{
	if(this->getName() == "BrewK" && this->list.empty())
	{
		cout << "You have put the ingredients in " << this->getName() << endl;
		cout << "Please interact with the BrewK again to send your finished batch to a fermenter" << endl;
		cout << "Beer takes 7 days to ferment!" << endl;
		this->addContents("Hops");
	}
	else if(this->getName() == "BrewK")
	{
		if(this->getFV1()->list.empty())
		{
			this->getFV1()->addContents("Full");
			cout << "Your beer is in FV1" << endl;
		}
		else if (this->getFV2()->list.empty())
		{
			this->getFV2()->addContents("Full");
			cout << "Your beer is in FV2" << endl;
		}
		else if (this->getFV3()->list.empty())
		{
			this->getFV3()->addContents("Full");
			cout << "Your beer is in FV3" << endl;
		}
		else if (this->getFV4()->list.empty())
		{
			this->getFV4()->addContents("Full");
			cout << "Your beer is in FV4" << endl;
		}
		else
		{
			cout << "None of your fermenters are free" << endl;
			cout << "You must dump the batch " << endl;
		}
		this->removeContents();
		this->setActionable(false);
	}

	if(this->getName() == "Mill ")
	{
		cout << "You have put grain into the mill!" << endl;
		cout << "Next interact with the Mash Tun to mash and lauter" << endl;
		this->setActionable(false);
	}


}
