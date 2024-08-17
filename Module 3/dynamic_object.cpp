#include <bits/stdc++.h>
using namespace std;

/*
এখানে আমারা যেই student name এর ক্লাস তৈরি করেছি সেটাকে যদি আমরা data type মনে করি তাহলে সব কিছু সহজ হয়ে যাবে.
যেমন আমরা যখন dynamic memory তৈরি করতাম তখন আমরা কিভাবে করতাম int *p = new int; এখন আমাদের student class নামের একটা data type তৈরি করলাম
এবং সেটা ঐ dynamic data type এর পরিবর্তে আমাদের নিজের তৈরি করা student data type দিলাম বাকি সব একইয় উদাহারনঃ


******WITHOUT CLASS********

int *fun()
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
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


******WITH CLASS*******

class Example
{
public:
    int arr[5];

    Example()
    {
        for (int i = 0; i < 5; i++)
        {
            (*this).arr[i] = arr[i];
        }
    }
};

Example* fun()
{
    Example *a = new Example();

    for (int i = 0; i < 5; i++)
    {
        cin >> (*a).arr[i];
    }

    return a;
}

int main()
{
    Example *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << (*a).arr[i] << " ";
    }

    return 0;
}


 */



class Student
{
public:
    int clss;
    int roll;
    float gpa;
    Student(int clss, int roll, float gpa)
    {
        (*this).clss = clss;
        (*this).roll = roll;
        (*this).gpa = gpa;
    }
};

Student *
fun()
{
    Student *polash = new Student(10, 3508003, 4.39);
    return polash;
}

int main()
{
    cout << endl;
    Student *p = fun();
    cout << " Class: " << (*p).clss << " Roll: " << (*p).roll << " GPA: " << (*p).gpa << endl; 
    delete p;
    return 0;
}