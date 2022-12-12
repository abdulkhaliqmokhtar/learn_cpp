#include <iostream>

void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "In doA\n";

    doB(); // doB() is called inside doA() function

    std::cout << "Ending doA()\n";
}

int main()
{
    std::cout << "Starting main()\n";

    doA(); // call doA() which consists of doB() inside it, hence, functions-ception

    std::cout << "Ending main()\n";

    return 0;
}

/*  
    Unlike some other programming lang,
    C++ functions can't be defined inside other functions
*/