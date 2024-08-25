#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int clss, id, math_marks, eng_marks;
    char sec;
};

bool comp(Student a, Student b)
{
    // int student_1_sum = 0, student_2_sum = 0;
    if (a.math_marks + a.eng_marks > b.math_marks + b.eng_marks)
    {
        return true;
    }
    else if (a.math_marks + a.eng_marks == b.math_marks + b.eng_marks)
    {
        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
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
        cin >> s[i].name >> s[i].clss >> s[i].sec >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }
    sort(s, s + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].clss << " " << s[i].sec << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}