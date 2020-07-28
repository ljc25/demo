/* P1591 阶乘数码 */
#include <bits/stdc++.h>

using namespace std;

int n;        // n 个 组
int x,y;
int a[5000];  // 多精度数组
int j,jw,p;       // jw 进位   p 位数

//快读
inline int read(){
    int f=1,x=0;
    char ch = getchar();
    while (ch<'0'||ch>'9')
    {
        if(ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch>='0'&&ch<='9')
    {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return f * x;
}

int main(){
    n = read();
    while (n--)
    {
        memset(a,0,sizeof(a));
        /* 清零
        for (int i = 1; i <= 1001; i++)
        {
            a[i] = 0;
        } 
        */
        a[1] = 1;
        x = read(),y = read();
        p = 1;
        for(int i = 2;i<=x;i++){
            jw = 0;
            for (j = 1; j <= p; j++)
            {
                a[j] = a[j] * i + jw;
                jw = a[j]/10;
                a[j] %= 10;
            }
            while (jw > 0)
            {
                a[j] = jw % 10;
                jw/=10;
                j++;
            }
            p = j - 1;
        }
        long long sum = 0;
        for (int i = p; i >= 1; i--)
        {
            if(a[i]==y){
                sum ++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}