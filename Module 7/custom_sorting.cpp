#include <bits/stdc++.h>
using namespace std;
class Freq
{
public:
    char value;
    int count;
};

bool comp(Freq a, Freq b)
{
    if (a.count == b.count)
    {
        if (a.value < b.value)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (a.count > b.count)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    string s;
    cin >> s;
    Freq f[26];

    for (int i = 0; i < 26; i++)
    {
        f[i].value = char(i + 97);
        f[i].count = 0;
    }

    for (char c : s)
    {
        f[c - 97].count++;
    }
    sort(f, f + 26, comp);

    for (int i = 0; i < s.size(); i++)
    {

        if (f[i].count != 0)
        {
            for (int j = 0; j < f[i].count; j++)
            {
                cout << f[i].value;
            }
        }
    }

    return 0;
}