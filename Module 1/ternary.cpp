#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    /* যদি আমাদের Shortcut if else লিখতে হয় তাহলে আমাদের ternary operator এর মাধ্যমে লিখতে পারি । */
    a % 2 == 0 ? cout << "Even number" : cout << "Odd number";

    return 0;
}