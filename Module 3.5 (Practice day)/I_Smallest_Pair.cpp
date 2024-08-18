#include <iostream>
#include <algorithm>
#include <climits> // for INT_MAX
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int minimum = INT_MAX; // Initialize to a very large value

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int value = arr[i] + arr[j] + j - i;
                minimum = min(minimum, value);
            }
        }

        cout << minimum << endl;
    }

    return 0;
}
