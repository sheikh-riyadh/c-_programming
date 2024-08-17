// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    if (int(a) >= 65 && int(a) <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (int(a) >= 97 && int(a) <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }
    else
    {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}