//Simple Maze Game Header
//Mark Boady
//Drexel University
//CS 172

#ifndef _MAZE_ROOM_
#define _MAZE_ROOM_

#include <string>
using namespace std;

class room
{
	private:
		//Description of the room to print out
		//These should be unique so the player knows where they are
		string description_;
		//These either tell us what room we get to if we go through the door
		//or they are null if the "door" can't be taken.
		room* north_;
		room* south_;
		room* east_;
		room* west_;
	public:
		//Constructor sets the description
		//All four doors should be set to NULL to start
		room(string descr="");
		//Access
		//Return the correct values
		string getDescription() const;
		room* getNorth() const;
		room* getSouth() const;
		room* getEast() const;
		room* getWest() const;
		//Mutators
		//Update the values
		void setDescription(string d);
		void setNorth(room* n);
		void setSouth(room* s);
		void setEast(room* e);
		void setWest(room* w);
};

#endif