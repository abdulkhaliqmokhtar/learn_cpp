#include <iostream>

// Definition of user-defined function doPrint()
void doPrint() // doPrint() is the called function in this example
{
    std::cout << "In doPrint()\n";
}

int main()
{
    std::cout << "Starting main()\n";

    doPrint(); // doPrint called for the first time
    doPrint(); // doPrint called for the second time

    std::cout << "Ending main()\n"; // This statement ins executed after doPrint() ends

    return 0;
}