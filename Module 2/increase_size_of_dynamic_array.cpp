#include <bits/stdc++.h>
using namespace std;
int main()
{

/* 
আমরা কিভাবে dynamic array size বৃদ্ধি করতে পারি সেটা দেখবো

১. প্রথমে আমরা একটি arr_1 নামে dynamic array তৈরি করলাম যার size ৩ এবং তার পর আর একটি arr_2 নামে dynamic array তৈরি করলাম.
২. আমরা প্রথম arr_1 array তে ইনপুট নিলাম এবং সাথে arr_2 নামের array তে আমাদের প্রথম arr_1 array এর মান রেখে দিলাম.
৩. প্রথম arr_1 dynamic array ডিলিট করে দিলাম এখানে dynamic part হল (new int[3]) এবং static part হল (int *arr_1) এইটা.
৪. এখন আমরা প্রথম arr_1 dynamic array সাইজ বৃদ্ধি করার জন্য আবার ও (new int[5]) করে dynamic ভাবে size বৃদ্ধি করে সেটা arr_1 array তে রেখে দিলাম.
৫. আমরা যেহেতু (২) ইনপুট নেয়ার সময় arr_2 এর মধ্যে arr_1 এর মান রেখে দিয়ে ছিলাম এখন যেহেতু আমাদের arr_1 এর size ৫ করেছি তাহলে arr_2 এর মান আমরা arr_1 নিয়ে নিলাম.
৬. এখন আমরা arr_2 ডিলিট করে দিলাম এভাবে করে আমরা arr_1 এর মান ৩ থেকে ৫ করে দিলাম.
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