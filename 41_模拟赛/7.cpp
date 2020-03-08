#include <bits/stdc++.h>

using namespace std;
int n,x,y,k;
double z;

void print(int m)
{
    if(m==0)
    cout << "You are wan mei!" << endl;
    else if(m==1)
    cout << "You are tai shou le!"<<endl;
    else if(m==2)
    cout << "You are tai pang le!"<<endl;
}
int main()
{
    cin >> n;
    while(n--)
    {
        cin >> x >> y;
        z=(x-100)*0.9*2;
        if(abs(y-z)<z*0.1){print(0);continue;}
        else 
        {
            if(y<z){print(1);continue;}
            else {print(2);continue;}
        }
    }
    return 0;
}