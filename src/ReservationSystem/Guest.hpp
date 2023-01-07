#pragma once

#include <string>	// std::string
#include "Date.hpp"

class Guest
{

public:

	// Constructor
	Guest();

	// Constructor: Six Arguments
	Guest(
		  int _GuestID					
		, const std::string& _Name		
		, Date& _DOB					
		, const std::string& _Email		
		, const std::string& _Sex		
		, bool _IsAdult
	);				

	// Destructor
	~Guest();

private:

	// Member Variables
	int GuestID;
	std::string Name;
	Date DateOfBirth;
	std::string Email;
	std::string Sex;
	bool IsAdult;
};

