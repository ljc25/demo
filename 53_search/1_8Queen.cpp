/* P1219 [USACO1.5]八皇后 Checker Challenge */
#include <bits/stdc++.h>

using namespace std;

int n,ans;
int xjiay[1000],xjiany[1000],y[14],a[14][14];

void dfs(int row){
    if(row > n){
        ans++;
        if(ans<=3){
            for(int i = 1;i<=n;i++)
                for(int j = 1;j<=n;j++){
                    if(a[i][j]==1){
                        cout << j << " ";
                    }
                }
            cout << endl;
        }
        return;
    }
    for(int i = 1;i<=n;i++){
        if(a[row][i]==0&&xjiay[row+i]==0&&xjiany[row-i+n]==0&&y[i]==0){
            a[row][i]=1;
            xjiay[row+i]=1;
            xjiany[row-i+n]=1;
            y[i]=1;

            dfs(row+1);

            a[row][i]=0;
            xjiay[row+i]=0;
            xjiany[row-i+n]=0;
            y[i]=0;
        }
    }
    return;
}

int main(){
    cin >> n;
    dfs(1);
    cout << ans;
    return 0;
}