/* P1413 坚果保龄球 */
#include <bits/stdc++.h>

using namespace std;
int maxn[10],zom[10][500000];
int ans,t,n,p;

int main(){
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> p >> t;
        maxn[p] = max(maxn[p],t);
        zom[p][t] ++;
    }
    for(int i = 1;i <= 6;i++){
        for(int j = 1;j<=maxn[i];){
            if(zom[i][j]){
                ans++;
                j+=60;
            }else
                j++;
        }
    }
    cout << ans;
    return 0;
}