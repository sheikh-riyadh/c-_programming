#include <bits/stdc++.h>
using namespace std;

void print(stringstream &s)
{
    string word;
    if (s >> word)
    {
        print(s);
        cout << word << endl;
    }
};
int main()
{
    stringstream str("Hello bangladesh is my country");
    print(str);

    return 0;
}