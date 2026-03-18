// C++ Program to demonstrate Reference to an Array

// Importing input output classes
#include <iostream>
using namespace std;

// Main driver method
int main()
{
    // Creating and initializing an integer array
    // Custom input entries
    int a[] = { 1, 2, 3, 4 , 5, 6, 7};

    // int (&b)[] = a;
    // Declaring this way wont work as an error will be
    // thrown invalid initialization of reference of type
    // ‘int (&)[]’ from expression of type ‘int [4]’ Here
    // you see compiler referred to "a" as int [4] not int*

    int(&b)[7] = a;

    // Iterating over elements using foreach loop
    for (int e : b) {
        // Print the elements of the array
        cout << e << " ";
    }
}
