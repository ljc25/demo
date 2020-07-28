/* P1604 B进制星球 */
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

int n; // 进制
string al,bl;
int a[3001],b[3001],c[3001];
char cl[3001];

int main(){
    n = read();
    cout << "n:" << n << "   ";
    cin >> al >> bl;
    a[0] = al.length(),b[0] = bl.length();
    
    for(int i = 1;i<=a[0];i++){
        if(isdigit(al[a[0]-i]))
            a[i] = al[a[0]-i] - '0';
        else
            a[i] = al[a[0]-i] - 'A' + 10;
    }
    for(int i = 1;i<=b[0];i++){
        if(isdigit(bl[b[0]-i]))
            b[i] = bl[b[0]-i] - '0';
        else
            b[i] = bl[b[0]-i] - 'A' + 10;
    }
    int len = a[0]>b[0]?a[0]:b[0];

    for(int i = 1;i<=len;i++){
        c[i] += (a[i]+b[i]);
        if(c[i] >= n){
            cout << "j";
            c[i+1] += (c[i]/n);
            c[i] %= n;
        }
    }
    while(c[len+1]>0){len++;}
    for(int i = len;i>0;i--){
        if(c[i]>=10)
            cl[i] = c[i] - 10 + 'A';
        else
            cl[i] = c[i] + '0';
    }
    for(int i = len;i>0;i--){
        putchar(cl[i]);
    }
    return 0;
}

