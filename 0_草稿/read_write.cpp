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
        x = (x<<1) + (x<<3) + ch^48;
        ch = getchar();
    }
    return f*x;
}

inline void write(int x){
    char F[200];
    int tmp = (x>0)?x:-x;
    if(x<0) putchar('-');
    int cnt = 0;
    while(tmp > 0){ 
        F[cnt++] = tmp % 10 + '0';
        tmp /= 10;
    }
    while(cnt>0){
        putchar(F[--cnt]);
    }
}

int main(){
    
    return 0;
}