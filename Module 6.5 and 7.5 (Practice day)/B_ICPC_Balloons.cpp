#include <bits/stdc++.h>
using namespace std;
class Balloons
{
public:
    char c;
    int value;
};
int main()
{

    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int n;
        cin >> n;
        char ch[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ch[i];
        }

        Balloons b[26];
        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            b[i].c = char(i + 65);
            b[i].value = 0;
        }

        for (int i = 0; i <n; i++)
        {
            int ascii = int(ch[i]) - 65;
            if (b[ascii].value >= 2)
            {
                b[ascii].value++;
            }
            else
            {
                b[ascii].value = 2;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            sum += b[i].value;
        }
        cout << sum<<endl;
    }

    return 0;
}