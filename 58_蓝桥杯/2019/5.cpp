#include <bits/stdc++.h>

using namespace std;

struct mg
{
    int x;
    int y;
    int cnt;
    char fx;
};
char a[31][51];
int aa[31][51];
mg b[15000];
int vis[31][51];
int nextx[4] = {1, 0, 0, -1};
int nexty[4] = {0, -1, 1, 0};
//             下，左，右，上
char fx1[4] = {'D', 'L', 'R', 'U'};
int z = 0;
char ans[1001];
int nums;

void dfs(int index,int x,int y){
    if(z==1)    return;
    if(x==1&&y==1){
        z = 1;
        for (int i = index-1; i >= 0; i--)
            cout << ans[i];
        return;
    }
    int tx,ty;
    for(int i = 3;i>=0;i--){
        tx = x + nextx[i];
        ty = y + nexty[i];
        if (tx < 1 || tx > 30 || ty < 1 || ty > 50)
            continue;
        if (aa[tx][ty] == aa[x][y]-1)
        {
            ans[index] = fx1[3-i];
            dfs(index+1,tx,ty);
            // ans[i] = 
        }
    }
}

int main()
{
    freopen("maze.txt", "r", stdin);
    for (int i = 1; i <= 30; i++)
        for (int j = 1; j <= 50; j++)
            cin >> a[i][j];
    // for (int i = 1; i <= 30; i++){
    //     for (int j = 1; j <= 50; j++)
    //         cout << a[i][j];
    //     cout << endl;
    // }

    int head = 1, tail = 1, m = 0;
    vis[1][1] = 1;
    b[tail].x = 1;
    b[tail].y = 1;
    b[tail].fx = 'k';
    b[tail].cnt = 0;
    tail++;
    int cx, cy, tx, ty, flag = 0;
    while (head < tail)
    {
        // cout << b[head].x << "," << b[head].y << " ";
        cx = b[head].x;
        cy = b[head].y;
        for (int i = 0; i < 4; i++)
        {
            tx = cx + nextx[i];
            ty = cy + nexty[i];
            if (tx < 1 || tx > 30 || ty < 1 || ty > 50)
                continue;
            if (a[tx][ty] == '0' && vis[tx][ty] == 0)
            {
                vis[tx][ty] = 1;
                b[tail].x = tx;
                b[tail].y = ty;
                b[tail].fx = fx1[i];
                b[tail].cnt = b[head].cnt + 1;
                aa[tx][ty] = b[tail].cnt;
                tail++;
            }
            if (tx == 30 && ty == 50)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
        head++;
    }
    if(flag)
    {
        // for (int i = 1; i <= 30; i++){
        //     for (int j = 1; j <= 50; j++)
        //         cout << aa[i][j] <<" ";
        //     cout << endl;
        // }
    }
    dfs(0,30,50);
    return 0;
}