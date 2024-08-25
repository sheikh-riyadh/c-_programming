#include <bits/stdc++.h>
using namespace std;

/*
আমাদের build-in sort functon সুদু নাম্বার টাইপ ডাটা গুলোকে sort করতে পারে যেমন int,float,double.
যেহেতু কোন object sort করতে পারে না এর জন্য আমাদের custom একটা function তৈরি করেছি যার নাম দিয়েছি
camp যার মধ্যে parameter হিসাবে a এবং b আসে এখন আমরা চাই আমাদের যার marks সব থেকে ছোট সেটা আগে থাকবে
if(a.marks <=b.marks){
return true;
}else{
return false;
}

এর মানে হল যদি আমাদের if condition ঠিক থাকে তার মানে আমারা বলতে পারি আমার প্রথম marks মানে a.marks ছোট
আছে তাহলে আমারা বললাম return true মানে condition যেহেতু ঠিক আছে তাহলে আমাদের কিছু করতে হবে না এর জন্য
true return করেছি

আর যদি আমাদের if conditon না ঠিক থাকে তাহলে আমরা false return করেছি তার মানে আমাদের
প্রথম a,marks ছোট না এর জন্য আমারা false return করেছি false মানে আমাদের condition ঠিক না
তখন আমাদের function সেটা ঠিক করে ছোট value টি sort করে দিবে 


আমাদের camp function তখনি sort করবে যখন false retun করবে



 */

class Student
{
public:
    string name;
    int roll, marks;
};

bool camp(Student a, Student b)
{
    if (a.marks <= b.marks)
        return true;
    else
        return false;
}

int main()
{

    int n;
    cin >> n;
    Student std[n];

    for (int i = 0; i < n; i++)
    {
        cin >> std[i].name >> std[i].roll >> std[i].marks;
    }

    sort(std, std + n, camp);
    cout << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << std[i].name << " " << std[i].roll << " " << std[i].marks << endl;
    }

    return 0;
}