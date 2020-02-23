/* 辗转相除法求最大公约数 */
#include <bits/stdc++.h>

using namespace std;

int x,y;

// 辗转相除法递归解法
int measure(int x,int y)
{
    if(x%y==0)
    return y;
    else
    measure(y,x%y);
}

int main()
{
    cin >> x >> y;
    cout << measure(x,y);
    return 0;
}