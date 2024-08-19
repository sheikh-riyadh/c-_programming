#include <bits/stdc++.h>
using namespace std;
int main()
{

    /* 
    আমরা যদি C++ স্পেস সহ ইনপুট নিতে চাই তাহলে আমাদের getline(cin,s);
    আর যদি আমরা char a[10] এভাবে array মত করে নিতে চাই তাহলে আমাদের space সহ নিতে চাইলে আমাদের
    cin.getline(a,10) দিতে হত কিন্তু আমাদের string এর spacific কোন size নেই তাই আমারা cin.getline()
    দিয়ে space সহ string নিতে পারব না তাই আমাদের getline(cin,s) এমন করে নিতে হয় ।
     */
    string s;
    getline(cin, s);
    cout << s;
    return 0;
}