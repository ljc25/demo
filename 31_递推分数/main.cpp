/* dp解法 */
#include <bits/stdc++.h>

using namespace std;

int n,k;
int f[201][7];

int main()
{
    cin >> n >>k;
    for(int i = 1;i<=n;i++) {f[i][0]=f[i][1]=1;}
    for(int i = 2;i<=n;i++)
        for(int j = 2;j<=min(k,i);j++)
            f[i][j] = f[i-1][j-1] + f[i-j][j];

    cout << f[n][k];
    return 0;
}