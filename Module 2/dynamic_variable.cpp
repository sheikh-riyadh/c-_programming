#include <bits/stdc++.h>
using namespace std;

/*

১. আমরা যদি dynamic variable তৈরি করতে চাই তাহলে আমাদের new keyword এর মাধ্যমে heap memory / dynamic memory তে একটা address তৈরি করতে হবে
এবং সেই address টি আমাদের pointer এর মধ্যমে রাখতে হবে কারন আমরা জানি যদি কোন address রাখতে হয় তাহলে আমাদের pointer ব্যাবহার করতে হয়
যেহেতু new keyword দিয়ে heap memory / dynamic memory address রাখলাম  a variable এর মধ্যে a variable কিন্তু static memory তার মানে a variable এর ও
একটা address আছে তাই যখন আমাদের fun function টি return করবে সাথে সাথে আমাদের static memory clear হয়ে যাবে তবে আমাদের heap momery clear
হবে না



২. আমরা যখন dynamic variable address তৈরি করে সেই address pointer variable এ রাখলাম তার মানে pointer variable a  এর মধ্যে আমাদের heap memory
address রাখলাম এবং derefernce এর মধ্যে ঐ heap memory address  এ আমারা ১০০ রাখলাম যেহেতু a এর মধ্যে আমাদের heap memory address  আছে সেই address
টি আমি return করে দিলাম যেহেতু address return করছি তাই আমরা fun function er return type int * star দিয়েছি এবং আমাদের main function pointer আকারে
গ্রহণ করছি এবং dereferance এর মাধ্যমে আমাদের ১০০ value পেয়েছি .


 */

int *fun() 
{
    int *a = new int;
    *a = 100;
    return a;
}

int main()
{
    int *result = fun();
    cout << endl;
    cout << *result << endl;
}