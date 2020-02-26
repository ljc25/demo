/*  P1192 爬楼梯(自己输入每步最多走几阶楼梯) dp递推解法  */
#include <bits/stdc++.h>

using namespace std;

int n,k; // n个台阶  最多走n步
int f[100001];
int mod = 100003;

int main()
{
    cin >> n >>k;
    f[0] = 1;
    f[1] = 1;
    for(int i = 2;i<=n;i++)
       for(int j = 1;j<=min(i,k);j++)
            f[i]= (f[i]+f[i-j])%mod;
    cout << (f[n]+mod)%mod;
    return 0;
}