#include <bits/stdc++.h>
using namespace std;
int main()
{

    /* 
    উদাহারনঃ ১
    =========
    আমরা string s="Hello bangladesh" এমন করে লিখতে পারি আবার string s("Hello bangladesh") এমন করে ও লিখতে পারি ।


    উদাহারনঃ ২
    ==========
    আমরা যদি string s("Hello bangladesh",4) যদি আমরা এমন করে লিখ তাহলে আউট পুট আসবে Hell কারন আমরা বলে দিয়েছি
    "Hello bangladesh" থেকে প্রথন 4টি ক্যারেক্টার নিতে ।


    উদারাহরঃ ৩
    ==========
    string s(26,'A') এর মানে হল আমারা বলে দিলাম ২৬ টি "A" store করতে আমরা যখন s print করবো তখন আউট পুট হিসাবে
    ২৬ টি "A" পাবো ।


    উদাহারনঃ ৪
    ==========
    string a="Hello bangladesh";
    string s(a,4);

    যদি একটি string a="Hello bangladesh" নেয় এবং অন্যটি string s(a,4) এখানে আমরা string a এর মান ২য় string s() এ রেখে
    দেই তাহলে প্রথন 4টি ক্যারেক্টার রিমুভ করে বাকি গুলো string s এর মধ্যে রাখবে আউটপুট হবে "o bangladesh" ।
     */


    // উদাহারনঃ ১ 
    string s = "Hello bangladesh";
    string s("Hello bangladesh");


    // উদাহারনঃ ২
    string s("Hello bangladesh",4);


    // উদাহারনঃ ৩
    string s(26,'A');


    // উদাহারনঃ ৪
    string a="Hello bangladesh";
    string s(a,4);
    return 0;
} 