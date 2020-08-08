#include <bits/stdc++.h>

using namespace std;

long long a,b,c;

int f[30][30][30];

int w(int a,int b,int c){
    if(a<=0||b<=0||c<=0){
        return 1;
    }else if(a>20||b>20||c>20){
        return w(20,20,20);
    }else if(f[a][b][c]!=0)
        return f[a][b][c];
    else if(a<b&&b<c){
        f[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c);
    }
    else{
        f[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
    }
    return f[a][b][c];
}

int main(){
    while(1){
        cin >> a >> b >> c;
        if(a==-1&&b==-1&&c==-1) return 0;
        else{
            printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
        }
    }
    return 0;
}