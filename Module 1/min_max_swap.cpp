#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
     /* আমরা ২টা value  এর মধ্যে মিনিমাম value বের করতে পারি যেমনঃ */

     int a, b;
     cin >> a >> b;
     int mn_1 = min(a, b);
     cout << "minimun value between two values" << " " << mn_1 << endl
          << endl;

     /* আমরা চাইলে অনেক গুলো values এর মধ্যে মিনিমাম value বের করতে পারি যেমন
      আমরা যদি অনেক গুলো values এর মধ্যে মিনিমাম value বের করতে চাই তাহলে min () ফাংশনের মধ্যে সেকেন্ড ব্রাকেট দিতে হবে উদাহারনঃ
       */
     int c, d, e, f;
     cin >> c >> d >> e >> f;
     int mn_2 = min({c, d, e, f});
     cout << "minimum value between many values" << " " << mn_2 << endl
          << endl;

     /* আমরা ২টা value  এর মধ্যে ম্যাক্সিমাম value বের করতে পারি যেমনঃ */

     int g, h;
     cin >> g >> h;
     int mx_1 = max(a, b);
     cout << "maximum value between to values " << " " << mx_1 << endl
          << endl;

     /* আমরা চাইলে অনেক গুলো values এর মধ্যে ম্যাক্সিমাম value বের করতে পারি যেমন
     আমরা যদি অনেক গুলো values এর মধ্যে মিনিমাম value বের করতে চাই তাহলে max () ফাংশনের মধ্যে সেকেন্ড ব্রাকেট দিতে হবে উদাহারনঃ */
     int i, j, k, l;
     cin >> i >> j >> k >> l;
     int mx_2 = max({i, j, k, l});
     cout << "maximum value between many values" << " " << mx_2 << endl
          << endl;

     /* আমারা চাইলে আমারাদের ২টি variable এর মধ্যে তাদের value অদলবদল করতে পারি যাকে বলা হয় swaping করা
      তবে min() and max() ফাংশন এর মত অনেক গুলো values swaping করা যাই না সুদু মাত্র ২টি values এর মধ্যে swaping করা যাই উদাহারনঃ   */

     int m, n;
     cin >> m >> n;
     swap(m, n);
     cout << m << " " << n;
}