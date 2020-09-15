/* P3650 [USACO1.3]滑雪课程设计Ski Course Design */
#include <bits/stdc++.h>

using namespace std;

int m,ans=99999999;  // m座山
int a[1001];

int main()
{
    cin >> m;
    for(int i = 1;i<=m;i++){
        cin >> a[i];
    }
    sort(a+1,a+1+m);
    for(int j = a[1];j<=a[m];j++){
        int sum = 0;
        for(int i = 1;i<=m;i++){
            if(a[i] - j > 17)
                sum += pow(a[i] - j - 17,2);
            if(a[i] < j)
                sum += pow(a[i] - j,2);
        }
        ans = min(sum, ans);
    }
    cout << ans;
    return 0;
}