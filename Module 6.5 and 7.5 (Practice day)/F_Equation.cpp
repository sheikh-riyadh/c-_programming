#include <bits/stdc++.h>
using namespace std;

int power(int x, int i)
{
    int result = 1;
    for (int j = 0; j < i; j++)
    {
        result *= x;
    }
    return result;
};
int main()
{
    int x, n;
    long long int sum=0;
    cin >> x >> n;
    for (int i = 2; i <= n; i += 2)
    {
        sum += power(x, i);
    }

    cout << sum;
    return 0;
}
