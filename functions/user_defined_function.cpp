#include <iostream>

// Definition of user-defined function doPrint()
void doPrint() // doPrint() is the called function in this example
{
    std::cout << "In doPrint()\n";
}

int main()
{
    std::cout << "Starting main()\n";

    doPrint(); // Interrupt main() function by making a function call to doPrint(), main () is the caller

    std::cout << "Ending main()\n"; // this statement ins executed after doPrint() ends

    return 0;
}