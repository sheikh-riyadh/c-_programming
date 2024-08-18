#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, n, s, result = 0;
    cin >> test_case;

    for (int test = 0; test < test_case; test++)
    {
        int flag = 0;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    result = arr[i] + arr[j] + arr[k];
                    if (result == s)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if (flag == 1)
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