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

int len;
string al,bl;
int a[10086],b[10086],c[10086];

void sub(int* m,int* n){
    for(int i = 1;i<=len;i++){
        c[i] += (m[i]-n[i]);
        if(c[i]<0){
            c[i+1]--;
            c[i]+=10;
        }
    }
    while(c[len]==0&&len>1){len--;}
}

int main(){
    cin >> al >> bl;
    a[0] = al.length(),b[0] = bl.length();
    for(int i = 1;i<=a[0];i++) a[i] = al[a[0]-i] - '0';
    for(int i = 1;i<=b[0];i++) b[i] = bl[b[0]-i] - '0';
    len = a[0]>b[0]?a[0]:b[0];
    if(al.length()<bl.length()||(al.length()==bl.length()&&al<bl)){
        putchar('-');
        sub(b,a);
    }else{
        sub(a,b);
    }
    for(int i = len;i>0;i--)
        cout << c[i];
    return 0;
}