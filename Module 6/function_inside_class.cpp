#include <bits/stdc++.h>
using namespace std;

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
    string name = "Sheikh Riyadh", department = "Computer";
    int roll = 350883;

    Student std(name, department, roll);
    std.printDetails();

        return 0;
}