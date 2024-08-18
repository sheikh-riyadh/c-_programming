#include <iostream>
using namespace std;
int main()
{
    int n, flag = 1;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start_index = 0, end_index = n - 1;

    while (start_index < end_index)
    {
        if (arr[start_index] == arr[end_index])
        {
            start_index++;
            end_index--;
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}