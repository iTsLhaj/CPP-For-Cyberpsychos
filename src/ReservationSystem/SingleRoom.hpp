#pragma once

#include "Room.hpp"

class SingleRoom : public Room
{

public:

	// Constructor
	SingleRoom();

	// Constructor: One Argument
	SingleRoom(int _RoomNumber)
	{
		RoomNumber = _RoomNumber;
		Beds.push_back(BedType::SINGLE);
		Type = RoomType::SINGLE;
	}

	// Destructor
	virtual ~SingleRoom();

};

