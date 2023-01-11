// when #include a file, the preprocessor replaces the #include directive with the contents of the included file
// the included contents are then preprocessed (along with the rest of the file), and then compiled
#include <iostream>

int main()
{
    std::cout << "Hello, world!\n";

    return 0;
}

/*
    when the preprocessor runs on this program, the preprocessor will replace #include <iostream>
    with the preprocessed contents of the file named "iostream"
*/