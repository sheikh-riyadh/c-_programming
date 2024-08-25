#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 0;
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}