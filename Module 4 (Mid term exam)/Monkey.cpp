#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str_1[100005];
    while (cin.getline(str_1, 100005))
    {
        int length = strlen(str_1);
        sort(str_1, str_1 + length);
        for (int i = 0; i < length; i++)
        {
            if (str_1[i] == ' ')
            {
                continue;
            }
            else
            {
                cout << str_1[i];
            }
        }

        cout << endl;
    }
    return 0;
}
