#pragma once

#include "Hotel.hpp"
#include "Date.hpp"
#include "Globals.hpp"

// Forward Declarations
class Guest;
class Room;

class Admin : public Hotel
{

public:

	// Constructor
	Admin();

	// Destructor
	virtual ~Admin();

	// Function to book a room
	Reservation* BookRoomFor(Date Dates[], Guest RegisteredGuest, Room BookedRoom, int TotalGuests);
};

