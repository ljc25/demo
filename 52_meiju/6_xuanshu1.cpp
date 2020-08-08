#include <bits/stdc++.h>

using namespace std;

int n,k,ans;
int a[21];
int book[21];

bool isprime(int s){
    for(int i = 2;i*i<=s;i++){
        if(s % i == 0) return false;
    }
    return true;
}

void dfs(int num,int add,int start,int end){
    if((num+end-start+1)<k) return;
    if(num==k){
        printf("%d\n",add);
        if(isprime(add)) ans++;
        return;
    }
    for(int i = start;i<=end;i++)
        dfs(num+1,add+a[i],i+1,end);
    return;
}

int main(){
    scanf("%d %d",&n,&k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a[i]);
    }
    dfs(0,0,1,n);
    printf("%d",ans);
    return 0;
}