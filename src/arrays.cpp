// Arrays

/*
 * Arrays are important to know essentially in software engineering
 * array is a collection of items stored at contiguous memory locations
*/

// arrays can be declared
int * A;                            // by using a pointer
int B[] = { 1, 3, 3, 7 };           // by initializing elements
int SmallArray[3] = { 1, 0, 1 };    // by specifying size & initializing elements
int LargeArray[64];                 // by specifying size

// arrays can be accessed using indexes ( NOTE: index starts from 0 not 1 )
SmallArray[0] = 4;                  // accessing array element at index 0
SmallArray[1] = 0;                  // accessing array element at index 1
SmallArray[2] = 4;                  // accessing array element at index 2

A = new int[3];               // allocate 3 integers and save pointer in A
// use A ...
delete[] A;                   // Free memory when done preventing memory leaks
