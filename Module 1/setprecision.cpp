#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    /* setprecision আমারা তখন ব্যাবহার করি যখন কোন double অথবা floating value
    দশমিক এর পর কত ঘর পর্যন্ত দেখতে চাই এটার জন্য আমারা setprecision ব্যাবহার করে থাকি নিচে উদাহারন দেয়া হল ।  */
    double d;
    cin >> d;
    cout << fixed << setprecision(2) << d << endl;
    return 0;
}