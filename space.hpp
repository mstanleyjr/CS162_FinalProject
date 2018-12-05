/******************************************************************************
** Program Name: Final Project - Brewery Simulator
** Author: Michael Stanley
** Date: 12/4/2018
** Description: This is the header file for the simulator. It holds all the space pointers
** for each cardinal direction for use on the playing board. It also holds specifc pointers
** for certain tanks. Because these tanks don't move, all of the board pieces can use them to point
** to the same space object on the board. The object's list is public so that other classes
** can "read" what is in each tank, much like documentation in a real brewhouse
*******************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP


#include <string>
using std::string;
using std::to_string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

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
		virtual void printContents();
		void setXCoord(int);
		int getXCoord();
		void setYCoord(int);
		int getYCoord();
		virtual void makeCeiling() = 0;
		virtual bool didLeave();
		virtual void action();
		int checkValidity(int, int);
		vector<string> list;




};

#endif
