/* P1190 接水问题 */
#include <bits/stdc++.h>

using namespace std;

int n,m,ans,t;
int a[11000];

int main(){
    // freopen("D:/L/document/P1190_2.txt","r",stdin);
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
    }
    t = m + 1;
    while(t<=n+m){
        for(int i = 1;i<=m;i++){
            a[i]--;
            if(a[i]==0){
                a[i] = a[t];
                t++;
            }
        }
        ans++;
    }
    cout << ans;
    return 0;
}