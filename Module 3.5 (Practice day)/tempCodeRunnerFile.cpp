#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 0, j = 1;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    swap(s[i], s[j]);
    cout << s[0];

    return 0;
}