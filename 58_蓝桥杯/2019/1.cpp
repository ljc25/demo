#include <bits/stdc++.h>

using namespace std;

int map1[21][7];
int vis[21];
int maxNum=-1;

void dfs(int n,int sum){
    if(n==6){
        maxNum=max(maxNum,sum);
        return;
    }
    for(int i = 1;i<=20;i++){
        if(!vis[i]){
            vis[i] = 1;
            dfs(n+1,sum+map1[i][n]);
            vis[i] = 0;
        }
    }
}

int main()
{
    freopen("1.txt","r",stdin);
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> map1[i][j];
        }
    }
    dfs(1,0);
    cout << maxNum;
    return 0;
}