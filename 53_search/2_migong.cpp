/* P1605 迷宫 */
#include <bits/stdc++.h>

using namespace std;

int ans,x,y,n,m,barriers,startx,starty,endx,endy;
int a[7][7];
int book[7][7];

int nexta[4][2] = {
    {0,1}, // 右
    {1,0}, // 下
    {0,-1}, // 左
    {-1,0}, // 上
};

void dfs(int b,int c){
    if(b == endx && c == endy){
        ans++;
        return;
    }
    int tx,ty;
    for(int i = 0;i<4;i++){
        tx = b + nexta[i][0];
        ty = c + nexta[i][1];
        if(tx<1||ty<1||tx>n||ty>m)
            continue;
        if(book[tx][ty] == 0 && a[tx][ty] == 0){
            book[tx][ty] = 1;
            dfs(tx,ty);
            book[tx][ty] = 0;
        }
    }
    return;
}

int main(){
    cin >> n >> m >> barriers >> startx >> starty >> endx >> endy;
    for(int i = 1;i<=barriers;i++){
        cin >> x >> y;
        a[x][y] = 1;
    }
/*     for (int i = 1; i <= n; i++){
        for(int j = 1;j <= m;j++)
            cout << a[i][j];
        cout << endl;
    } */

    book[startx][starty] = 1;
    dfs(startx,starty);
    cout << ans;
    return 0;
}