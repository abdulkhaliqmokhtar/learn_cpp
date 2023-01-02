/*
    Option 2: Use a forward declaration

    A forward declaration allows us to:
    tell the compiler about the existence of an identifier before actually defining the identifier.

    In the case of functions, this allow us to tell the compiler about the existence of a function before we define the function's body.
    This way, when the compiler encounters a call to the function, it'll understand that we're making a function call,
    and can check to ensure we're calling the function correctly,
    even if it doesn't yet know how or where the function is defined.
*/

#include <iostream>

// function declaration statement (function prototype) includes return type, name, parameters, and semicolon
// no function body!
int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above

    return 0;
}

int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}

/*
    When compiler reaches the call to add() in main(), it will know what add() looks like, and it won't complaint.
    Function declarations do not need to specify the names of the parameters.
*/