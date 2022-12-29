#include <iostream>

int add(int x, int y) // function parameters x and y are local variables that are instantiated (created) and initialized here
{
    int z{ x + y };   // z is a local variable that's created and initialized here

    return z;
} // instantiated variables x, y and z are destroyed here

/* 
    slightly complex program demonstrating lifetime of a variable named a:
    ----------------------------------------------------------------------
*/

void doSomething()
{
    std::cout << "Hello!\n";
}

int main()
{
    int a{ 0 }; // a's lifetime begins here

    doSomething(); // variable a is still alive during this function call

    return 0;
} // a's lifetime ends here