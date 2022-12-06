#include <iostream> // preprocessor directive for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x{};            // define variable x to hold user input (zero-initialize by putting curly bracket {})
    std::cin >> x;      // get number from user (keyboard) and store it in variable x

    std::cout << "You entered " << x << '\n'; // prefer use of '\n' compared to std::endl as the former doesn't request flush
    return 0;
}