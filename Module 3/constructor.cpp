#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll, cls;
    float gpa;
    Student(int roll, int cls, float gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    cout << endl;
    Student s(350883, 10, 4.39);
    cout << "Roll: " << s.roll << " Class: " << s.cls << " GPA: " << s.gpa << endl;
    return 0;
}