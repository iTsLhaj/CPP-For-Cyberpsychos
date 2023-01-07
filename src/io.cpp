// Input & Output
#include <iostream> // for: std::cout, std::cin, std::cerr

int main()
{
    // Declare a variable
    int x{ };

    // Read in Value
    std::cout << "Enter a number... : ";
    std::cin >> x;

    // Print out value
    std::cout << "\nYour Number is: " << x << std::endl; // std::endl & '\n' stands for new line

    return 0; // exit code 0; the program exited successfully with no errors
}
