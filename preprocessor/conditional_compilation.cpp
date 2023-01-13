/*
    the conditional compilation preprocessor directives allow us to specify under what conditions something will or won't compile

    there are a quite a few different conditional compilation directives, but we'll only cover the three that are used by far the most here:
    #ifdef, #ifndef, and #endif

    the #ifdef preprocessor directive allows the preprocessor to check whether an identifier has been previously #defined
    if so, the code between the #ifdef and matching #endif is compiled. if not, the code is ignored
*/

#include <iostream>

#define PRINT_JOE

int main ()
{

#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be ignored since PRINT_BOB is not defined
#endif

    return 0;
}

/*
    because PRINT_JOE has been #defined, the line std::cout << "Joe\n" will be compiled

    because PRINT_BOB has not been #defined, the line std::cout << "Bob\n" will be ignored

    #ifndef is the opposite of #ifdef, in that it allows you to check whether an identifier has NOT been #defined yet
*/