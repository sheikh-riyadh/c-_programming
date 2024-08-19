#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* 
    আমরা আগে স্ট্রিং লিখার জন্য  array তৈরি করতাম এবং যেমন char a[10]="Hello" যখন আমরা size declear 
    করে দিতাম তখন আমরা চাইলে size এর বেশি string রাখতে পারতাম না কিন্তু C+ আমাদের সেটা করতে হয়
     না আমরা স্ট্রিং নামের object এর মাধ্যমে আমারা কোন size declear না করে স্ট্রিং লিখতে পারি dynamic ভাবে size বসিয়ে নেয় 
    যেমনটি আমারা দেখতে পাচ্ছি 

    string এর কিছু build-in functions:
    a.size() এইটা দিয়ে আমরা স্ট্রিং এর টোটাল সাইজ বের করতে পারি ।
    a.clear() এইটা দিয়ে আমরা string কে ক্লিয়ার করে দিতে পারি ।

    a.empty() এইটা দিয়ে আমরা চেক করতে পারি আমাদের string empty কিনা যদি empty থাকে তাহলে true return করবে
    আর না থাকলে false return করবে ।
    a.resize() এইটা দিয়ে আমরা আমাদের string এর size বাড়াতে পারি যেমন আমাদের Hello লিখা আছে তার সাইজ হচ্ছে
    ৫ এখন এর সাইজ যদি ১০ করে দেয় তাহলে Hellonullnullnullnullnull কারন যেহেতু আমাদের Hello এর মধ্যে ৫ টি লেটার আছে
    বাকি ৫ টা ঘর খালি থাকার কারনে যেখানে null বসিয়ে দিয়েছে যদি আমারা চাই বাকি ঘরে null না বসে তাহলে আমাদের a.resize(10,'x')
    এখন null এর জাইগাই 'x' বসে যাবে যেমন Helloxxxxx;

    a.front() আমরা যদি চাই string এর প্রথম index এর মান দেখতে তাহলে আমরা a[0] কিন্তু আমরা যদি function দিয়ে করতে চাই তাহলে a.font()
    লিখলে হয়ে যাবে .
    a.back() এইটা দিয়ে আমরা last index দেখতে পারব আর যদি function ছাড়া দেখতে চাই তাহলে a[a.size()-1];


     */
    string a="Hello";
    cout<<a.max_size();
    return 0;
}