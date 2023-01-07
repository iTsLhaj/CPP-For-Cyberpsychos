// Basic Data Types

#include <string>

char ID = '2CxTiUD';                    // Representation of a Character Set

bool isValid = true;                    // for python users: remember use true not True
bool isExpired = false;                 // again pyheads: it's false not False !

// Numerical Integer Type
int Count = 0;                          // Declare int and init to 0; 4 bytes (32-bit)

/// btw for Initialieation There are 4 basic ways to initialize variables in C++:
int a;                                  // no initializer
int b = 5;                              // initializer after equals sign
int c( 6 );                             // initializer in parenthesis
int d { 7 };                            // initializer in braces
/// SRC: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/

float Amount = 3.056894f;               // 4 bytes (32-bit)
double Pi = 3.1415926535;               // 8 bytes (64-bit on x64 Processor)

std::string Name = "Andrzej Sapkowski"; // Sequence of characters
