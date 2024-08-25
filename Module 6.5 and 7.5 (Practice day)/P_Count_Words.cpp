#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool found = false;
    int count = 0;
    for (int i = 0; i <= s.size() - 1; i++)
    {
        if (isalpha(s[i])>0)
        {
            if (found==false)
            {
                count++;
                found=true;
                
            }
        }else{
            found=false;
        }
    }
    
    cout<<count;

    return 0;
}