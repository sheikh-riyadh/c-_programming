#include <bits/stdc++.h>
using namespace std;

void reverse(string s, int *count)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    if (1 <= (*count))
    {
        (*count)--;
        cout<<" ";
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }

    while (ss >> word)
    {
        reverse(word, &count);
    }

    return 0;
}