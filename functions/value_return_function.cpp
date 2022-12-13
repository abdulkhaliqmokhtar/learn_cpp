#include <iostream>

/*
    getValueFromUser() function to return the value user entered back to main() so data can be make use in main()
    void return function:   no value will be returned to the caller
    int return function:    value type of int will be returned to the caller

    Note: this doesn't determine what specific value is returned - only determines what type of value will be returned
*/ 
int getValueFromUser() // use int to return a value instead of void
{
    int userValue{};
    std::cin >> userValue;

    return userValue; // return the value user entered back to the caller (return by value)
}

int main()
{
    std::cout << "Enter your first integer: ";
    int firstNumber{getValueFromUser()};    // initialize firstNumber with the return value of getValueFromUser()
    
    std::cout << "Enter your second integer: ";
    int secondNumber {getValueFromUser()};  // initialize secondNumber with the return value of getValueFromUser()

    std::cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << '\n';

    return 0; // status code or exit code (sometimes) or return code (rare)
}