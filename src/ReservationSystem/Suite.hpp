#pragma once

#include "Room.hpp"

class Suite : public Room
{

public:

	// Constructor
	Suite();

	// Constructor: One Argument
	Suite(int _RoomNumber)
	{
		RoomNumber = _RoomNumber;
		Beds.push_back(BedType::KING);
		Beds.push_back(BedType::KING);
		Beds.push_back(BedType::QUEEN);
		Beds.push_back(BedType::QUEEN);
		Type = RoomType::SUITE;
		Status = RoomStatus::VACANT;
	}

	// Destructor
	virtual ~Suite();

};

