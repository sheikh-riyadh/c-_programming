#include <iostream>
using namespace std;
int main()
{
    // How do i get single input
    int a;
    cin >> a;
    cout << "This is single line input " << a << endl
         << endl;

    // How do i get multiple input
    int b, c;
    cin >> b >> c;
    cout << "This is multiple line input b = " << b << "and c = " << c << endl
         << endl;

    // Typecasting that's mean how do i convert data type
    char ch = 'A';
    int d = int(ch);
    cout << d;

    return 0;
}