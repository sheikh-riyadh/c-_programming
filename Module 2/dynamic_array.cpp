#include <bits/stdc++.h>
using namespace std;


/* 
dynamic variable তৈরি করলে আমাদের heap memory / dynamic memory তে array জন্য address তৈরি হয় এবং যেহেতু function থেকে return করার পরও heap memory
তে থেকে যাই তাই call stack থেকে function টি চলে যাওয়ার পরও arr value গুলো আমাদের main function এ access করতে পারি .
*/

int *fun()
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}