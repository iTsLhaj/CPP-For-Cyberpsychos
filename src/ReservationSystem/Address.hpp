#pragma once

#include <string>	// std::string

/*
 * A struct is a collection of variables of different
 * data types under a single name. It has similar
 * characteristics to a class. Struct members have public
 * access by default while class members have private
 * access by default.
 *
 * Like a class, memory is allocated when a struct
 * is created or instantiated, but NOT when it's defined.
*/
struct Address
{

public:

	// Default Constructor
	Address() {}

	// Constructor: 5 Arguments
	Address(
		  std::string _StreetAddress
		, std::string _City
		, std::string _State
		, std::string _ZipCode
		, std::string _Country) :
		  StreetAddress(_StreetAddress)
		, City(_City)
		, State(_State)
		, ZipCode(_ZipCode)
		, Country(_Country)
	{}

	// Member Variables
	std::string StreetAddress;
	std::string City;
	std::string State;
	std::string ZipCode;
	std::string Country;
};