#include <bits/stdc++.h>

using namespace std;

long long n,m,x,y;


int main(){
    scanf("%lld %lld",&n,&m);
    x = n * m * (n+1) * (m+1)/4;
    for(int i = 1;i<=min(n,m);i++){
        y += (n-i+1)*(m-i+1);
    }
    printf("%lld %lld",y,x-y);
    return 0;
}