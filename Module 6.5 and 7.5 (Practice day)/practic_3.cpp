#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, x;
    getline(cin, s);
    cin >> x;

    int x_length = x.size(), match_count = 0, x_index = 0;
    for (int i = 0; i <= s.size() - 1; i++)
    {
        if (s[i] == x[x_index])
        {
            x_index += 1;
        }
        else if (x_length == x_index)
        {
            match_count += 1;
            x_index = 0;
        }
        else
        {
            x_index = 0;
        }
    }

    cout << match_count;

    return 0;
}