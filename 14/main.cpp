/* P1044栈 */
/*解法一 : 卡特兰数论解法

建立数组f。f[i]表示i个数的全部可能性。
f[0] = 1, f[1] = 1; //当然只有一个
设 x 为当前出栈序列的最后一个，则x有n种取值
由于x是最后一个出栈的，所以可以将已经出栈的数分成两部分
1、比x小
2、比x大
比x小的数有x-1个，所以这些数的全部出栈可能为f[x-1]
比x大的数有n-x个，所以这些数的全部出栈可能为f[n-x]
这两部分互相影响，所以一个x的取值能够得到的所有可能性为f[x-1] * f[n-x]
另外，由于x有n个取值，所以
ans = f[0]*f[n-1] + f[1]*f[n-2] + ... + f[n-1]*f[0];
这，就是传说中的卡特兰数 */

#include<bits/stdc++.h>
using namespace std;
int n; //栈的深度
int f[30];
int main()
{
    cin >> n;
    f[0] = 1,f[1]=1;
    for(int i = 2;i<=n;i++)
        for(int j = 0;j<i;j++)
            f[i]+=f[j]*f[i-j-1];
    cout << f[n];
    return 0;
}

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