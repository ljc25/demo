#include <bits/stdc++.h>

using namespace std;

string a,b;

int main()
{
    getline(cin,a);
    getline(cin,b);
    string::iterator it;
    for(int i = 0;i<b.length();i++)
    {
    for (it = a.begin(); it < a.end(); it++)
    {
         if (*it == b[i])
        {
            a.erase(it);
            it--;
        }
    }
    }
    for(int i = 0;i<a.size();i++)
        cout << a[i];
    return 0;
}