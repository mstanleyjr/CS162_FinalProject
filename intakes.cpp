

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
	if(this->getName() == "BrewK" && (this->list.empty())
	{
		cout << "You have put the ingredients in " << this->getName() << endl;
		cout << "Please interact with the BrewK again to send your finished batch to a fermenter" << endl;
		cout << "Beer takes 7 days to ferment!" << endl;
		this->addContents("Hops");
	}
	else if(this->getName() == "BrewK")
	{
		if(FV1->list.empty())
		{
			FV1->addContents("Full");
			cout << "Your beer is in FV1" << endl;
		}
		else if (FV2->list.empty())
		{
			FV2->addContents("Full");
			cout << "Your beer is in FV2" << endl;
		}
		else if (FV3->list.empty())
		{
			FV3->addContents("Full");
			cout << "Your beer is in FV3" << endl;
		}
		else if (FV4->list.empty())
		{
			FV4->addContents("Full");
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
