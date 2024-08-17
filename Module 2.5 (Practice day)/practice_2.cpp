#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int *b = new int[m];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    delete[] a;
    a = new int[m];

    for (int i = n; i < m; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    for (int i = 0; i < m; i++)
    {
        a[i] = b[i];
    }

    delete[] b;

    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
}