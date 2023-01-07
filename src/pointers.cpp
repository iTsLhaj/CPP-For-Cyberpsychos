
/*
 * Pointers - a representation of a memory address
 *
 * (&) - operator which returns the address of the variable
 * (*) - operator that returns the value of varriable at the specified address
*/


void run()
{
	int value = 5;

	// declare a pointer variable
	int* pointer;
	
	// assign the address of a variable to a pointer
	pointer = &value;

	*pointer = 10;

	std::cout << "Value: " << value << std::endl; // -> Value: 10
}

class Hotel
{

};

// Pointer vs. Reference

Hotel* Pointer; 	// Variable that holds memory address where value lives
			// Address can be re-assigned.
Hotel Reference;	// Like a "constant pointer". Address cannot be changed After initialization .

// Whenever you use "new" ...
Hotel* MyHotel = nex Hotel();

// You Must call delete when you're finished with the object
delete MyHotel;
