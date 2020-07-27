#include <bits/stdc++.h>

using namespace std;

inline int read(){
    int f = 1,x= 0;
    char ch = getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')
            f= -1;
        ch = getchar();
    }
    while (ch>='0'&&ch<='9')
    {
        x = (x<<1)+(x<<3) + (ch^48);
        ch =getchar();
    }
    return f * x;
}

int n,jw;

int a[1001],p=1,c[1001];

void jc(int m){
    int i;
    for(i = 1;i<=p;i++){
        a[i] = a[i] * m + jw;
        jw = a[i] / 10;
        a[i] %= 10;
    }
    while(jw>0){
        a[i++] = jw % 10;
        jw /= 10;
    }
    p = i - 1;
}

void add(){
    int i;
    for(i = 1;i<=p;i++){
        c[i] += a[i]; 
        if(c[i]>=10){
            c[i+1] += c[i] / 10;
            c[i] %= 10;
        }
    }
}

int main(){
    memset(a,0,sizeof(a));
    a[1] = 1;
    n = read();
    for(int i = 1;i<=n;i++){
        jc(i);
        jw = 0;
        add();
    }
    for(int i = p;i>0;i--){
        cout << c[i];
    }
    return 0;
}