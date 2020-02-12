/* P1976 鸡蛋饼 */
#include <bits/stdc++.h>
using namespace std;

int a[40000];
int n;

int main()
{
    cin >> n;
    a[0]=a[1]=1,a[2]=2;
    for(int i =3;i<=n;i++)
        for(int j=0;j<i;j++)
        {
            a[i]+=(a[j]*a[i-j-1]%100000007);
            a[i]%=100000007;
        }
    cout << a[n];
    return 0;
}