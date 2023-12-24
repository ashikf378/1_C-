#include <iostream>
using namespace std;

// Function named 'addition' that takes a pointer to an integer as a parameter
void addition(int *x)
{
    // Dereferencing the pointer and assigning the value 3400 to the variable it points to
    *x = 3400;
}

// The main function
int main()
{
    // Declaring an integer variable 'a' and initializing it with the value 10
    int a = 10;

    // Declaring a pointer to an integer 'ptr' and initializing it with the address of 'a'
    int *ptr = &a;

    // Calling the 'addition' function and passing the address of 'a' (ptr) as an argument
    addition(ptr);

    // Printing the value of 'a' after the 'addition' function call
    cout << a << endl;

    // The main function returns 0 (implicitly indicating successful execution)
}
