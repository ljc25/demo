/* P2356 弹珠游戏 */
#include <bits/stdc++.h>

using namespace std;

int n,sum,x,y,ans=0;
int a[1005][1005];

int main(){
    cin >> n;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++){
            cin >> a[i][j];
        }
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++){
            if(a[i][j] == 0){
                sum = 0;
                x = i,y = j;
                while(x>=1){
                    if(a[x][y] != 0)
                        sum += a[x][y];
                    x--;
                }
                x = i,y = j;
                while(x<=n){
                    if(a[x][y] != 0)
                        sum += a[x][y];
                    x++;
                }
                x = i,y = j;
                while(y>=1){
                    if(a[x][y] != 0)
                        sum += a[x][y];
                    y--;
                }
                x = i,y = j;
                while(y<=n){
                    if(a[x][y] != 0)
                        sum += a[x][y];
                    y++;
                }
            }
            ans = max(sum,ans);
        }
    cout << ans;
    return 0;
}