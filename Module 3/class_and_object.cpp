#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{

    cout<<endl;
    Student a;
    cin.getline(a.name,100);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    cin >> a.roll >> a.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa;
    return 0;
}