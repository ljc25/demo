#include <bits/stdc++.h>

using namespace std;

int a[5001],b[5001];
int dd;
char al[5001];

inline int read(){
    int f = 1, x = 0;
    char ch = getchar();
    while (ch < '0'||ch > '9')
    {
        if(ch == '-')
            f = -1;
        ch = getchar();
    }
    while(ch>='0'&&ch<='9'){
        x = (x<<1) + (x<<3) + (ch^48);
        ch = getchar();
    }
    return f * x;
}

int main(){
    cin >> al >> dd;
    a[0] = strlen(al);
    int j;
    for(j = 1;j<=a[0];j++) a[j] = al[a[0] - j] - '0';
    while(a[j]<dd&&j>1){
        a[j-1] += (a[j] * 10);
        a[j] = 0;
        j--;
    }
    for(int i = j;i>0;i--){
        if(a[i]>=dd){
            b[i] = a[i] / dd;
            a[i] %= dd;
        }
        a[i-1] += (a[i]*10);
    }
    for(int i = j;i>0;i--){
        cout << b[i];
    }
    return 0;
}