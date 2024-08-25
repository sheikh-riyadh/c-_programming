#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls, id;
    char sec;
};

int main()
{
    int n;
    cin >> n;
    Student s[n];
    char temp;
    int last_index = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id;
    }
    for (int i = 0; i < n; i++)
    {
        if (last_index > i)
        {
            temp = s[i].sec;
            s[i].sec = s[last_index].sec;
            s[last_index].sec = temp;
            last_index -= 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << endl;
    }

    return 0;
}