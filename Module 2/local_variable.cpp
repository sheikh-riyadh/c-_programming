#include <bits/stdc++.h>
using namespace std;




/* আমারা জানি যখন আমরা কোন arrya declear করি তখন আমাদের arr variable প্রথম value address return করে এবং যখন আমরা লুপ করি তখন address
এর সাথে calculation করে আমাদের বাকি value গুলো দেয় । যেহেতু arr এর মধ্যে প্রথম value address আছে তাই আমরা return করছি pointer হিসাবে যার কারনে
return type star দিয়েছি এবং আমাদের main function থেকে arr এর প্রথম address receive করছি এবং address receive করতে হলে আমারা pointer 
দিয়ে receive করে হয় আমারা জানি যখন কোন থেকে কোন কিছু return করে দেয় তখন সাথে সাথে call stack থেকে আমাদের function টি মেমোরি থেকে ক্লিয়ার হয়ে যাই
যখন মেমোরি থেকে ক্লিয়ার হয়ে যাই তখন সাথে সাথে সেই function এর static variable ডিলিট হয়ে যাই যার কারনে আমাদের main function এ আমারা ঐ function এর 
আর কিছু পায় না এই হল static variable এর প্রবলেম এর জন্য এই প্রোগ্রামটি এরর দিবে  ।
 */




int *fun()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    return arr;
}

int main()
{
    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}