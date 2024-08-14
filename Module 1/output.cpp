#include <iostream>
int main()
{

    // How do i write normal string
    std::cout << "Save bangladesh";

    // How do i write new line
    std::cout << "\n";      /* C programming way */
    std::cout << std::endl; /* C++ programming way*/

    // How do i write variable
    int a = 10;
    std::cout << a;

    std::cout << std::endl;

    // How do i write multiple variable
    int b = 20, c = 30;
    std::cout << b << " " << c;

    std::cout << std::endl;

    // How do i write multiple variable with normal string

    int d = 40, e = 50;
    std::cout << "The number is " << d << " " << "and the another number is " << e;

    return 0;
}