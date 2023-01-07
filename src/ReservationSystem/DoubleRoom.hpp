#pragma once

#include "Room.hpp"

class DoubleRoom : public Room
{

public:

	// Constructor
	DoubleRoom();

	// Constructor: One Argument
	DoubleRoom(int _RoomNumber)
	{
		RoomNumber = _RoomNumber;
		Beds.push_back(BedType::DOUBLE);
		Beds.push_back(BedType::DOUBLE);
		Type = RoomType::DOUBLE;
		Status = RoomStatus::VACANT;
	}

	// Destructor
	virtual ~DoubleRoom();

};

