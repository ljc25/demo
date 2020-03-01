#include <bits/stdc++.h>

using namespace std;

int n;
int ans;

int factorial(int num)
{
    if (num == 0) //base case
        return 1;
    else
        return num * factorial(num - 1);
}

int main(){
    cin >>n;
    for(int i = 1;i<=n;i++)
    {
        ans += factorial(i);
    }
    cout << ans;
    return 0;
}