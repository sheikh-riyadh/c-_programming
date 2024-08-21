#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*
    আমাদের যদি সুদু মাত্র ক্যারেক্টার নিয়ে কোন কাজ করতে হয় তাহলে আমাদের ranage base loop করলে কাজ হবে
    আর যদি এমন হয় আমাদের ক্যারেক্টার ও লাগবে এবং সাথে index ও লাগবে তাহলে আমাদের for loop দিয়ে কাজ করতে হবে ।
     */

    string s;
    cin >> s;

    for (char c : s)
    {
        cout << c << endl;
    }

    return 0;
}