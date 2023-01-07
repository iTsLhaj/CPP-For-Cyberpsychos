
/*
 * include directives
*/
#include <iostream>		// std::cout, std::endl
#include "Date.hpp"
#include "Guest.hpp"
#include "Admin.hpp"

/*
 * main function
*/
int main(int argc, char** argv)
{
	// What dates are we staying for?
	Date CheckIn = Date(Month::June(), Day::Thirteenth(), Year::CurrentYear());
	Date CheckOut = Date(Month::June(), Day::Fifteenth(), Year::CurrentYear());

	// Create an array for our dates and add check in/check out dates to it
	Date Dates[2] = { CheckIn, CheckOut };

	// Setup a guest
	Guest NewGuest = Guest(746592, "Jim Sherman", Date(Month::February(), 25, 1965), "JimSherman@js.com", "Male", true);


	// (746592, "Jim Sherman", Date(Month::February(), 25, 1965), "JimSherman@js.com", "Male", true);

	// Have the desk clerk book a hotel room for the given dates!
	// We will call "BookRoomFor" in Admin class with dot (.) operator
	Admin DeskClerk;
	DeskClerk.BookRoomFor(Dates, NewGuest, DeskClerk.Rooms.at(0), 1);

	// Print "YES" if room was booked or "NO" if it was not
	std::cout << DeskClerk.Rooms.at(0).IsRoomBooked() << std::endl << std::endl;

	return 0;
}