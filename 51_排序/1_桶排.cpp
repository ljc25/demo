#include <bits/stdc++.h>

using namespace std;

int n,m,x;
int a[1000];

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1;i<=m;i++){
        scanf("%d",&x);
        a[x]++;
    }
    for(int i = 1;i<=n;i++){
        if(a[i]!=0){
            for(int j = 1;j<=a[i];j++)
            printf("%d ",i);
        }
    }
    return 0;
}