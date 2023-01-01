#include <iostream>

int add(int x, int y) // x and y are created and enter scope here
{
    // x and y are visible/usable within this function only
    return x + y;
} // x and y go out of scope and are destroyed here

int main ()
{
    int a{ 5 }; // a is created, initialized, and enters scope here
    int b{ 6 }; // b is created, initialized, and enters scope here

    // a and b are usable within this function only
    std::cout << add(a, b) << '\n'; // calls function add() with x=5 and y=6

    return 0;
} // a and b go out of scope and are destroyed here

/*
    Dissecting the program chronologically:

    1. execution starts at the top of main
    2. main's variable a is created and given value 5
    3. main's variable b is created and given value 6
    4. function add() is called with values 5 and 6 for arguments
    5. add's variable x is created and initialized with value 5
    6. add's variable y is created and initialized with value 6
    7. operator+ evaluates expression x + y to produce the value 11
    8. add's x and y are destroyed
    9. main prints 11 to the console
    10. main returns 0 and to the OS
    11. main's a and b are destroyed

    If function add() were to be called twice, parameters x and y would be created and destroyed twice, once for each call.
*/
