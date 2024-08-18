#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int unique_id, total_marks;
    char name[50], section;
};

int main()
{
    int test_case;
    cin >> test_case;
    Student std[3];

    for (int i = 0; i < test_case; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cin >> std[j].unique_id >> std[j].name >> std[j].section >> std[j].total_marks;
        }

        if (std[0].total_marks > std[1].total_marks && std[0].total_marks > std[2].total_marks)
        {
            cout << std[0].unique_id << " " << std[0].name << " " << std[0].section << " " << std[0].total_marks << endl;
        }
        else if (std[1].total_marks > std[0].total_marks && std[1].total_marks > std[2].total_marks)
        {
            cout << std[1].unique_id << " " << std[1].name << " " << std[1].section << " " << std[1].total_marks << endl;
        }
        else if (std[2].total_marks > std[0].total_marks && std[2].total_marks > std[1].total_marks)
        {
            cout << std[2].unique_id << " " << std[2].name << " " << std[2].section << " " << std[2].total_marks << endl;
        }
        else if (std[0].total_marks == std[1].total_marks || std[0].total_marks == std[2].total_marks)
        {
            cout << std[0].unique_id << " " << std[0].name << " " << std[0].section << " " << std[0].total_marks << endl;
        }
        else if (std[1].total_marks == std[0].total_marks)
        {
            cout << std[0].unique_id << " " << std[0].name << " " << std[0].section << " " << std[0].total_marks << endl;
        }
        else if (std[1].total_marks == std[2].total_marks)
        {
            cout << std[1].unique_id << " " << std[1].name << " " << std[1].section << " " << std[1].total_marks << endl;
        }
        else if (std[2].total_marks == std[0].total_marks)
        {
            cout << std[0].unique_id << " " << std[0].name << " " << std[0].section << " " << std[0].total_marks << endl;
        }
        else
        {
            cout << std[1].unique_id << " " << std[1].name << " " << std[1].section << " " << std[1].total_marks << endl;
        }
    }

    return 0;
}