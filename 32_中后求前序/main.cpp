#include <bits/stdc++.h>

using namespace std;

string z,h;

void beford(string x,string y)
{
    if(x.size()>0)
    {
        char ch = y[y.size-1];
        cout << ch;
        int k = x.find(ch);
        beford(x.substr(0,k),y.substr(0,k));
        beford(x.substr(k+1),y.substr(y.size()-k-1));
    }
}

int main()
{
    cin >> z >> h;
    beford(z,h);
    return 0;
}