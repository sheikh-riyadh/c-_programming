#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int minimum_value = min({a, b, c});
    int maximum_value = max({a, b, c});

    cout << minimum_value << " " << maximum_value;
}