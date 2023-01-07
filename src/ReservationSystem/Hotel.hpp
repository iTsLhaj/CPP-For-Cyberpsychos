#pragma once

#include <vector>		// std::vector
#include <string>		// std::string
#include "Address.hpp"
#include "Room.hpp"

/*
 * A class is a user defined type or data structure
 * that has data and functions as members
 * whose access is controlled by private, protected,
 * or public access modifiers.
 *
 * Memory is allocated when a class is created or
 * instantiated, but NOT when it's defined.
*/
class Hotel
{

// Access Modifier
public:

	/*
	 * Constructor
	 *
	 * A constructor initializes objects of a class.
	 * They are automatically called when object or instance of class is created.
	*/
	Hotel();

	/*
	 * A second constructor with arguments for hotel id, name, address, and total rooms
	*/
	Hotel(
		  int _HotelID
		, std::string _HotelName
		, Address _HotelAddress
		, std::vector<Room> _Rooms);

	/*
	 * Destructor
	 *
	 * The destructor is called when the object is out of scope.
	 *
	 * 1. The function ends
	 * 2. The program ends
	 * 3. A block containing local variables ends
	 * 4. A delete operator is called
	 *
	 * This destructor is "virtual" since it is a base class.
	 * This prevents undefined behavior in C++.
	*/
	virtual ~Hotel() {}

	// Total Rooms in Hotel
	std::vector<Room> Rooms;

// Access Modifier
protected:

	// Member Variables (Allowed only for child classes)
	int HotelId;
	std::string HotelName;
	Address HotelAddress;

};

