#include <iostream>

int main ()
{

#ifdef PRINT_BOB
    std::cout << "Bob\n";
#endif

    return 0;    
}

/*
    this program doesn't prints "Bob", because PRINT_BOB was never #defined

    in place of #ifdef PRINT_BOB and #ifndef PRINT_BOB, we'll also see #if defined(PRINT_BOB) and #if !defined(PRINT_BOB)

    these do the same, but use a slightly more C++ style syntax
*/