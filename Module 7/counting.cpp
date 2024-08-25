#include <bits/stdc++.h>
using namespace std;
int main()
{
    string country_name;
    cin >> country_name;
    int counting[26] = {0};

    for (char c : country_name)
    {
        counting[c - 97]++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for(int j=0; j<counting[i-97]; j++){
            cout<<i;
        }
    }

    return 0;
}