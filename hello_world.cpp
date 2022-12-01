// This is the preprocessor directive which indicates that we would like to use the contents of the <iostream> library
// This line is needed to use std::cout
#include <iostream>

// Every cpp program must have special "main" function
// When the program is run, the statements inside of main are executed in sequential order
int main() {

    // cout stands for "character output"
    // The << operator after cout allow us to send letters or numbers to the console to be output
    std::cout << "Hello World from C++!\n";

    // The return statement returns the value of 0 to the operating system, which means “everything went okay!”
    return 0;
}