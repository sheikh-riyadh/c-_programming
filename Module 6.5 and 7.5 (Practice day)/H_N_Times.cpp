#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;

    for (int t = 0; t < test_case; t++)
    {
        int print_number;
        string print_value;
        cin >> print_number >> print_value;
        for (int i = 0; i < print_number; i++)
        {
            cout << print_value << " ";
        }
        cout<<endl;
    }

    return 0;
}