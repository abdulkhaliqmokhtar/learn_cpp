#include <iostream> // handled by preprocessor

/*
    In C++, any name that is note defined inside a class, function, or a namespace is considered to be part
    of an implicitly defined namespace called the global namespace (sometimes also called the global scope)

*/

// All of the following statement are part of the global namespace
void foo();     // okay: function forward declaration in the global namespace
int x;          // compiles but strongly discouraged: uninitialized variable definition in the global namespace
int y{ 5 };     // compiles but discouraged: variable definition with initializer in the global namespace
x = 5;          // compile error: executable statements are not allowed in the global namespace

int main()      // okay: function definition in the global namespace
{
    return 0;
}

void goo();     // okay: another function forward declaration in the global namespace