#include <iostream>
#include <utility>
using namespace std;

int main()
{

    int arr_size;
    cin >> arr_size;
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr_size - 1; i++)
    {

        for (int j = i + 1; j < arr_size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
}