#pragma once

#include <string>		// std::string
#include <vector>		// std::vector
#include "Room.hpp"
#include "Globals.hpp"
#include "Date.hpp"
#include "Guest.hpp"

// Forward Declaration
class Room;

class Reservation
{

public:

	// Constructor
	Reservation();

	// Constructor: Seven Arguments
	Reservation(
		  Room* _RoomToBook
		, Date _InDate
		, Date _OutDate
		, Guest _NewGuest
		, int _RoomNumber
		, RoomType _Type
		, int _NumGuests) :
		  RoomToBook(_RoomToBook)
		, InDate(_InDate)
		, OutDate(_OutDate)
		, NewGuest(_NewGuest)
		, RoomNumber(_RoomNumber)
		, Type(_Type)
		, NumGuests(_NumGuests)
	{
		if (RoomToBook != nullptr)
			BookedRooms.push_back(RoomToBook);
	}

	// Destructor
	~Reservation();

	// Status of Room Payment
	PaymentStatus GetPaymentStatus() const { return StatusOfPayment; }
	void SetPaymentStatus(PaymentStatus _PaymentStatus) { StatusOfPayment = _PaymentStatus; }

	// Member Variables
	int BookingID;
	int HotelID;
	std::vector<Room*> BookedRooms;

	double Price;
	PaymentStatus StatusOfPayment;

	Room* RoomToBook;
	Date InDate;
	Date OutDate;
	Guest NewGuest;
	int RoomNumber;
	RoomType Type;
	int NumGuests;
	std::string BookingTime;

};

