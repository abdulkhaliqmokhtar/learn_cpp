#include <iostream>

int add(int x, int y) // add's x and y are created and enter scope here
{
    // add's x and y are visible/usable within this function only
    return x + y;
} // add's x and y go out of scope and are destroyed here

int main ()
{
    int x{ 5 }; // main's x is created, initialized, and enters scope here
    int y{ 6 }; // main's y is created, initialized, and enters scope here

    // main's x and y are usable within this function only
    std::cout << add(x, y) << '\n'; // calls function add() with x=5 and y=6

    return 0;
} // main's x and y go out of scope and are destroyed here

/*
    This program compiles and run, even though functions main() and add() both have variables named x and y. Why?

    First, it's recognizable that even though functions main() and add() both have variables named x and y, these variables are distinct.
    
    The x and y in function main() have nothing to do with the x and y in function add(),
    they just happen to share the same names.

    Second, when inside of function main, the names x and y refer to the main() locally scoped variables x and y.
    Those variables can be only be seen and used inside of main().

    Similarly, when inside function add(), the names x and y refer to function parameters x and y,
    which can only be seen and used inside of add().

    In short, neither add() nor main() know that the other function has variables with the same names,
    because the scopes don't overlap, it's always clear to the compiler which x and y are being referred to at any time.

*/