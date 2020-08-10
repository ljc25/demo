/* P2813 母舰 */
#include <bits/stdc++.h>

using namespace std;
int m,n,ans; // m防御   n攻击
int a[100001],b[100001];

int main(){
    cin >> m >> n;
    for(int i = 1;i<=m;i++)
        scanf("%d",&a[i]);
    for(int i = 1;i<=n;i++)
        scanf("%d",&b[i]);
    sort(a+1,a+m+1);
    sort(b+1,b+n+1);
    if(a[m]>=b[n]){
        cout << ans;
        return 0;
    }
    int i=1,j=1;
    while(i<=m&&j<=n){
        if(a[i]<b[j]) {
            i++;
            j++;
        }
        else{
            ans += b[j];
            j++;
        }
    }
    while(i<=m){
        cout << 0;
        return 0;
    }
    while(j<=n){
        ans += b[j];
        j++;
    }
    cout << ans;
    return 0;
}