#include <bits/stdc++.h>
using namespace std;

/* 
আমরা Student নামের একটা ক্লাস তৈরি করলাম সেখানে name,department, এবং roll নামের variable তৈরি করেছি
আমাদের Student নামের একটি contructor আছে যেখানে name,department,roll parameter হিসাবে গ্রহণ করে
যেহেতু constructor Student(string name, string department, int roll) এবং ক্লাস এর name,department,roll
same নামের তাই আমরা যখন ক্লাস এর name এর মধ্যে আমরা constructor এর name টা রাখতে চাচ্ছি এর জন্য প্রোগ্রাম 
error দেয় কারন তখন প্রোগ্রাম বোঝতে পারে না সে constructor এর name এর মধ্যে ক্লাস এর name রাখবে নাকি class এর name
এর মধ্যে constructor এর name রাখবে, এর জন্য আমরা this keyword ব্যাবহার করে থাকি this keyword মূলত 
কোন ক্লাস এর variable কে node করে মানে আমরা this keyword এর মাধ্যমে কোন ক্লাস এর variable কে access করতে পারি
যখন আমাদের constructor parameter এবং class এর variable same থাকে তখন আমরা this keyword দিয়ে বলে দেয় যে
ক্লাস এর name variable এর মধ্যে তুমি constructor আশা নাম রাখো এভাবে করে বাকি গুলো ও আমরা বলে দেয় তখন আমাদের
কোন error শো করে না 
 */









class Student
{
public:
    string name, department;
    int roll;
    Student(string name, string department, int roll)
    {
        this->name = name;
        this->department = department;
        this->roll = roll;
    }

    void printDetails()
    {
        cout << this->name << " " << this->department << " " << this->roll;
    }
};
int main()
{
    string nm = "Sheikh Riyadh", dp = "Computer";
    int rl = 350883;

    Student std(nm, dp, rl);
    std.printDetails();

        return 0;
}