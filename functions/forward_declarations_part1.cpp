/* 
    Option 1: Reorder the function definitions.

    One way to address the issue of sequentially compiled contents of code files is:
    reorder the function definitions so add() is defined before main()

*/
#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

/*
    This way, by the time main() calls add(), the compiler will already know what add() is.

    However, in a larger program, it can be tedious trying to figure out which functions call which other functions (and in what order),
    so they can be declared sequentially.

    Furthermore, this option is not always possible.
    
    Let's say a program that has two functions A() and B(),
    if function A() calls function B(), and function B() calls function A(),
    then there's no way to order the functions in a way that will make the compiler happy.

    If function A() is defined first, the compiler will complaint that it doesn't know what function B() is.
    If function B() is defined first, the compiler will complaint that it doesn't know what function A() is.

*/
