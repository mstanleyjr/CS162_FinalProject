

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
		Space* getNorth();
		Space* getSouth();
		Space* getEast();
		Space* getWest();
		string getName();
		void setName(string);
		bool isActionable();
		void setActionable(bool);
		bool isFilled();
		void setFilled(bool);
		void addContents(string);
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
