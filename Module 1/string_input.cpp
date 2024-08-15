#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* আমরা যদি C++ এর মধ্যে string নিয়ে কাজ করতে চাই তাহলে আমাদের কিছু বিষয় মাথাই রাখতে হবে যেমন
    আমাদের যদি স্পেস সহ string নিয়ে কাজ করতে হয় তাহলে আমাদের cin.getline() এই ফাংশন নিয়ে কাজ করতে হয়
    যদি স্পেস সহ string ইনপুট নেওয়ার আগে আমাদের অন্য কিছু ইনপুট নিতে হয় তাহলে আমাদের getchar() এই ফাংশন ব্যাবহার করতে হয় না হলে
    string input কাজ করতে চাই না উদাহারনঃ
     */

    char s[100];
    int a;
    cin >> a;
    getchar(); /* এইখানে getchar নেওয়ার কারন হল যখন a ইনপুট নেওয়া হবে তখন enter দেওয়ার পর আমাদের string ইনপুট নিবে এর জন্য যেখানে enter পরবে সেখানে getchar ব্যাবহার করতে হবে  */
    cin.getline(s, 100);
    cout << a << endl;
    cout << s << endl;
}