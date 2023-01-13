#include <iostream>

/*
    when the preprocessor encounters this directive, any further occurrence of the identifier is replaced by substitution_text.
    the identifier is traditionally typed in all capital letters, using underscores to represent spaces
*/
#define MY_NAME "Khaliq"

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
}

/*
    object-like macros with substitution text were used (in C) as a way to assign names to literals
    this is no longer necessary, as better methods are available in C++

    object-like macros with substitution text should generally now only be seen in legacy code

    it's recommended to avoid these kind of macros altogether, as there are better ways to do this kind of thing
*/