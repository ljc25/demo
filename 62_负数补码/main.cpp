#include <bits/stdc++.h>

using namespace std;

int flag = 1;
int a[8];

void work(int x)
{
    if (x < 0)
        x = -x, flag = 0;
    for(int i = 0;i<=7;i++)
    {
        a[i] = x % 2;
        x /= 2;
    }
    if (!flag)
    {
        // 求负数补码的精髓就在于：
        // 常规第一下，求负数的补码，是求它绝对值的补码，再取反加1
        // 换个思路思考一下，对于一个二进制数，取反后所有的1变为0，0变为1，
        // 再加1的话，那么就相当于后面0全部取反加1，一直进位到第一个1处，而这个第一个0就是原先二进制的第一个1
        // 所以最后的思路就是，对原先的二进制代码进行遍历，找到第一个1，保留这个1，达到进位1的效果，后面正常全部取反
        for (int i = 0; i <= 7; i++)
        {
            if (a[i] == 1 && i < 7)
            {
                for (int j = i + 1; j <= 7; j++)
                {
                    a[j] = !a[j];
                }
                break;
            }
        }
    }
    for (int i = 7; i >= 0; i--)
    {
        if (a[i] == 0)
            cout << ' ';
        else
            cout << '*';
    }
}

int main()
{
    int p = 10;
    int a, b;
    while (p--)
    {
        for (int i = 1; i <= 16; i++)
        {
            cin >> a >> b;
            work(a);
            work(b);
            cout << endl;
        }
    }
    return 0;
}