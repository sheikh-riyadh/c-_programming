#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;

    for (int t = 0; t < test_case; t++)
    {
        string s, x;
        cin>>s>>x;
        while (s.find(x) != -1)
        {
            int index = s.find(x);
            s.replace(index, x.size(), "#");
        }
        cout << s << endl;
    }

    return 0;
}