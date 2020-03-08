#include <bits/stdc++.h>

using namespace std;

int n,x;

bool check(int y)
{
    if(y>2&&y%2==0) return true;
    for(int i=2;i<=sqrt(y);i++)
    {
        if(y%i==0) return true;
        else continue;
    }
    return false;
}

int main()
{
    cin >> n;
    for(int i =0;i<n;i++)
    {
        cin >> x;
        if(check(x))
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes"<< endl;
        }
        
    }
    return 0;
}