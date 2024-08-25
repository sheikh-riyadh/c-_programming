#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, marks;
};

bool comp(Student a, Student b)
{
    if (a.marks > b.marks)
    {
        return true;
    }
    else if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }

    sort(s, s + n, comp);
    cout<<endl<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }

    return 0;
}