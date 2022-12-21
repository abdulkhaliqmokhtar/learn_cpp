#include <iostream>

// 
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    
    int userValue{};
    std::cin >> userValue;

    return userValue; // return the value user entered back to the caller (return by value)
}

// we don't want to return any value from printDouble function; thus the void function
void printDouble(int input)
{
    std::cout << input << " double is: " << input * 2 << '\n';
}

int main ()
{
    // use the return value of getValueFromUser function directly as an argument to printDouble function
    printDouble(getValueFromUser());

    return 0;
}