#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char simble;
    cin >> a >> simble >> b;
    if (simble == '>')
    {
        if (a > b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (simble == '<')
    {
        if (a < b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else
    {
        if (simble == '=')
        {
            if (a == b)
            {
                cout << "Right";
            }
            else
            {
                cout << "Wrong";
            }
        }
    }
    return 0;
}