/* P1376 [USACO05MAR]Yogurt factory 机器工厂 */
#include <bits/stdc++.h>

using namespace std;

int x,y,n,k,lastweek;
long long ans;

int main()
{
    // freopen("in.txt", "r", stdin);
    cin >> n >> k;
    for(int i = 1;i<=n;i++){
        cin >> x >> y;
        if(i == 1)
            lastweek = x;
        else
            lastweek = min(lastweek+k,x);
        ans += lastweek*y;  
    }
    cout << ans;
    return 0;
}