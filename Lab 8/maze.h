//Simple Maze Game Header
//Mark Boady
//Drexel University
//CS 172

#ifndef _MAZE_
#define _MAZE_

#include "room.h"

class maze
{
	private:
		//Room the player starts in
		room* start_room_;
		//If the player finds this room they win
		room* exit_room_;
		//What room is the player currently in
		room* current_;
	public:
		//Inputs: Pointer to start room and exit room
		//Sets current to be start room
		maze(room* st=NULL, room* ex=NULL);
	
		//Return the room the player is in (current)
		room* getCurrent() const;
	
		//The next four all have the same idea
		//See if there is a room in the direction
		//If the direction is NULL, then it is impossible to go that way
		//in this case return false
		//If the direction is not null, then it is possible to go this way
		//Update current to the new move (move the player)
		//then return true so the main program knows it worked.
		bool moveNorth();
		bool moveSouth();
		bool moveEast();
		bool moveWest();
	
		//If the current room is the exit,
		//then the player won! return true
		//otherwise return false
		bool atExit() const;
	
	
		//If you get stuck in the maze, you should be able to go
		//back to the start
		//This sets current to be the start_room
		void reset();
};

#endif