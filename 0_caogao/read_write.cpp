/* 快读 快写模板 */
#include <bits/stdc++.h>

using namespace std;

inline int read(){
    int f = 1, x = 0;
    char ch = getchar();
    while (ch<'0'||ch>'9'){
        if(ch == '-')
            f = -1;
        ch = getchar();
    }
    while(ch>='0'&&ch<='9'){
        x = (x<<1) + (x<<3) + (ch^48);
        ch = getchar();
    }
    return f*x;
}

void write(int a)
{
    if(a<0) putchar('-'),a=-a;
    if(a>=10)write(a/10);
    putchar(a%10+48);
}

int main(){
    
    return 0;
}