#include <bits/stdc++.h>

using namespace std;

int x,y;

int gcd(int a,int b){
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}

int main()
{
    cin >> x >> y;
    int ans = gcd(x,y);
    cout << ans;
    return 0;
}