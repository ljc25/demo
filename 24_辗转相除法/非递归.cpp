 /* 本题的要求很简单，就是求N个数字的和。麻烦的是，这些数字是以有理数分子/分母的形式给出的，
   你输出的和也必须是有理数的形式。

   输入格式：
   输入第一行给出一个正整数N（≤100）。随后一行按格式a1/b1 a2/b2 …给出N个有理数。
   题目保证所有分子和分母都在长整型范围内。另外，负数的符号一定出现在分子前面。

   输出格式：
   输出上述数字和的最简形式 —— 即将结果写成整数部分 分数部分，其中分数部分写成分子/分母，
   要求分子小于分母，且它们没有公因子。如果结果的整数部分为0，则只输出分数部分。
   暴力解法:通分求和化简
 */
#include <bits/stdc++.h>

using namespace std;

struct rational{
    int fz,fm;
}; 
int n,b=1; // n个人

// 辗转相除法
int measure(int x,int y)
{
    int z = y;
    while(x%y!=0)
    {
        z = x % y;
        x = y;
        y = z;
    }
    return z;
}

int main()
{
    cin >> n;
    rational yls[n];
    for(int i = 0;i<n;i++)
        scanf("%d/%d",&yls[i].fz,&yls[i].fm);

    for(int i =0;i<n;i++)
        b*=yls[i].fm;

    if(b==0)
    {
        cout << 0;
        return 0;
    }

    for(int i = 0;i<n;i++)
        for(int j = 0;j<n;j++)
            if(i!=j)
                yls[i].fz*=yls[j].fm;

    int a = 0;
    for(int i = 0;i<n;i++)
        a+=yls[i].fz;

    int z = measure(a,b);
    a/=z;
    b/=z;

    if(abs(a)<abs(b))
        cout << a << '/' << b;
    else
    {
        int c = a / b;
        a -= c*b;
        if(b!=1)
            cout << c << " "<< a << "/" << b;
        else
            cout << c ;
    }
    
    return 0;
}