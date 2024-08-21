#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};
int main()
{
    Student *student_1 = new Student("Sheikh Riyad", 350883);
    Student *student_2 = new Student("Polash", 350880);
    *student_2 = *student_1;

    /*
    আমরা যদি student_1 এর value গুলো student_2 এর মধ্যে নিতে চাই তাহলে আমাদের *student_2 = *student_1; এমন করে আমরা
    কোন object কে কপি করতে পারি ।
     */
    return 0;
}