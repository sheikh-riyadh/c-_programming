#include <bits/stdc++.h>
using namespace std;
int main()
{

/* 
আমরা কিভাবে dynamic array size বৃদ্ধি করতে পারি সেটা দেখবো

১. প্রথমে আমরা একটি arr_1 dynamic array তৈরি করলাম যার size ৩ এবং তার পর আর একটি arr_2 dynamic array তৈরি করলাম.
২. তার পর আমরা প্রথম arr_1 array



 */







    int *arr_1 = new int[3];
    int *arr_2 = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr_1[i];
        arr_2[i] = arr_1[i];
    }
    delete[] arr_1;

    arr_1 = new int[5];
    for (int i = 0; i < 3; i++)
    {
        arr_1[i] = arr_2[i];
    }
    arr_1[3] = 40, arr_1[4] = 50;
    delete[] arr_2;

    for (int i = 0; i < 5; i++)
    {
        cout << arr_1[i] << " ";
    }
}