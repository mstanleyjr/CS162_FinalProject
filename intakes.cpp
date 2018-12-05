/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the source code for the intakes object, derived of space
** This is used for the tanks that intake ingredients such as the mill and the BK.
*******************************************************************************/



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
	else if(this->getName() == "BrewK" && !(this->list.empty()))
	{
		Space* ferm1 = this->getFV1();
		Space* ferm2 = this->getFV2();
		Space* ferm3 = this->getFV3();
		Space* ferm4 = this->getFV4();



		if(ferm1->list.empty())
		{
			ferm1->addContents("Full");
			cout << "Your beer is in FV1" << endl;
		}
		else if (ferm2->list.empty())
		{
			ferm2->addContents("Full");
			cout << "Your beer is in FV2" << endl;
		}
		else if (ferm3->list.empty())
		{
			ferm3->addContents("Full");
			cout << "Your beer is in FV3" << endl;
		}
		else if (ferm4->list.empty())
		{
			ferm4->addContents("Full");
			cout << "Your beer is in FV4" << endl;
		}
		else
		{
			cout << "None of your fermenters are free" << endl;
			cout << "You must dump the batch " << endl;
		}
		this->removeContents();
		this->setActionable(false);
		ferm1->setActionable(false);
		ferm2->setActionable(false);
		ferm3->setActionable(false);
		ferm4->setActionable(false);
		Space* brite = this->getBBT();
		brite->setActionable(false);
	}

	if(this->getName() == "Mill ")
	{
		cout << "You have put grain into the mill!" << endl;
		cout << "Next interact with the Mash Tun to mash and lauter" << endl;
		this->setActionable(false);
	}


}
