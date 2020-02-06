//  解法二 : dfs递归
#include <bits/stdc++.h>
using namespace std;

int n;

int f[20][20];
int dfs(int x, int y){   //x是操作数队列  y是栈中数
    if(f[x][y]!=0) return f[x][y];
    if(x==0) return 1;
    if(y>0) f[x][y]+=dfs(x,y-1);
    f[x][y]+=dfs(x-1,y+1);
    return f[x][y];
}
int main()
{
    cin >> n;
    cout << dfs(n,0) << endl;
    return 0;
}