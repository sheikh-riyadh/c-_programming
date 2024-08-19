#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* 
    stringstream এটা হল এমন এক পদ্ধততি যা মূলত word by word print করে আমরা যদি চাই কত
    গুলো word আছে সেটা দেখতে তাহলে আগে আমরা stringstream ss(s); দিয়ে দিব যেহেতু আমরা স্ট্রিং
    stringstream ss variable রেখে দিয়েছি while loop এর মাধ্যমে ss variable থেকে একটা একটা ওয়ার্ড
    আমাদের word নামের variable রেখে দিচ্ছি এবং সেটা প্রিন্ট করছি ।
    
     */

    string s = "Hello bangladesh my country";
    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<word<<endl;
    }


    return 0;
}