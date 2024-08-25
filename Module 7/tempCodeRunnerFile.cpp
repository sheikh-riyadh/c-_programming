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
    Student std[n];
    for (int i = 0; i < n; i++)
    {
        cin >> std[i].name >> std[i].roll >> std[i].marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = j + 1; j < n; j++)
        {
            if (std[i].marks < std[j].marks)
            {
                swap(std[i], std[j]);
            }
            if (std[i].marks == std[j].marks)
            {
                if (std[i].roll > std[j].roll)
                {
                    swap(std[i], std[j]);
                }
            }
        }
    }

    cout << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << std[i].name << " " << std[i].roll << " " << std[i].marks << endl;
    }

    return 0;
}