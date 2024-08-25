#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    getchar();
    for (int i = 0; i < test_case; i++)
    {
        string s;
        int first_three_sum = 0, second_three_sum = 0;
        cin >> s;
        for (int j = 0; j <= s.size() - 1; j++)
        {
            if (2 >= j)
            {
                first_three_sum += int(s[j]) - 48;
            }
            else
            {
                second_three_sum += int(s[j]) - 48;
            }
        }

        if (first_three_sum == second_three_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}