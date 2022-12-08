#include <iostream>

int main ()
{
    // integer (int - stores whole number)
    int x {5};          // assignment
    int y {6};          // assignment
    int z {};           // declaration

    int sum = x + y;

    std::cout << "x is " << x << '\n';
    std::cout << "y is " << y << '\n';
    std::cout << "sum of x and y is " << sum << '\n' << '\n';
    
    // double (stores number including decimals)
    double temperature {32.9};
    double cgpa {3.75};
    double price {19.99};

    std::cout << "the temperature is " << temperature << '\n';
    std::cout << "your CGPA is " << cgpa << '\n';
    std::cout << "the price of this product is " << price << '\n' << '\n';

    // single character (char - stores single character)
    char grade {'A'};

    std::cout << "your grade is " << grade << '\n' << '\n';

    // boolean (bool - stores true or false)
    bool power {true};      // is the power turned on? if true = yes; if false = no
    bool forSale {true};    // is the product for sale? if true = yes; if false = no

    // string (std::string - stores object that represents a sequence of text)
    std::string name {"Khaliq"};
    std::string day {"Saturday"};

    std::cout << "my name is " << name << '\n';
    std::cout << "today is " << day << '\n';

    return 0;
}