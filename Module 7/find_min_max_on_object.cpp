#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll, marks;
};

int main()
{
    int n;
    cin >> n;
    Student *std = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> std[i].name >> std[i].roll >> std[i].marks;
    }

    Student *mn = new Student;
    mn->marks = INT_MAX; 

    for (int i = 0; i < n; i++)
    {
        if(std[i].marks<mn->marks){
            *mn = std[i];
        }
    }

    cout << mn->name << " " << mn->roll << " " << mn->marks;

    return 0;
}