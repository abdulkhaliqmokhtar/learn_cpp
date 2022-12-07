#include <iostream> // preprocessor directive for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers separated by a space: "; // ask user for two numbers

    int x{};            // define variable x to hold user input (zero-initialize by putting curly bracket {})
    int y{};            // define variable y to hold user input (zero-initialize by putting curly bracket {})
    
    std::cin >> x >> y;      // get number from user (keyboard) and store it in variable x

    std::cout << "You entered " << x << " and " << y << '\n'; // prefer use of '\n' compared to std::endl as the former doesn't request flush
    return 0;
}