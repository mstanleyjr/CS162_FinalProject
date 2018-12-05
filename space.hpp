

#ifndef SPACE_HPP
#define SPACE_HPP


#include <memory>
using std::shared_ptr;
using std::make_shared;

#include <string>
using std::string;
using std::to_string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <queue>
using std::queue;

class Space
{
	private:
		Space* north;
		Space* south;
		Space* east;
		Space* west;
		Space* FV1;
		Space* FV2;
		Space* FV3;
		Space* FV4;
		Space* BBT;
		string name;
		bool	actionable;
		bool	filled;
		vector<string> list;
		int xCoord;
		int yCoord;


	public:
		Space();
		Space(int, int);
		//Might need a destructor??
		void setNorth(Space*);
		void setSouth(Space*);
		void setEast(Space*);
		void setWest(Space*);
		void setFV1(Space*);
		void setFV2(Space*);
		void setFV3(Space*);
		void setFV4(Space*);
		void setBBT(Space*);
		Space* getNorth();
		Space* getSouth();
		Space* getEast();
		Space* getWest();
		Space* getFV1();
		Space* getFV2();
		Space* getFV3();
		Space* getFV4();
		Space* getBBT();
		string getName();
		void setName(string);
		bool isActionable();
		void setActionable(bool);
		bool isFilled();
		void setFilled(bool);
		void addContents(string);
		void removeContents();
		string getContents();
		void printContents();
		void setXCoord(int);
		int getXCoord();
		void setYCoord(int);
		int getYCoord();
		virtual void makeCeiling() = 0;
		virtual bool didLeave();
		virtual void action();
		int checkValidity(int, int);




};

#endif
