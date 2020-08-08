#include <bits/stdc++.h>

using namespace std;

int n,k,ans;
int a[21];
int book[21];

//判断素数
bool sushu(int m){
    for(int i = 2;i<=sqrt(m);i++){
        if(m%i==0){
            return false;
        }
    }
    return true;
}

void dfs(int add,int x,bool flag,int num){
    if(x>n||x<=n&&num>k) return;
    if(flag){
        add += a[x];
        num++;
    }
    if(num==k){
        if(sushu(add)) ans++;
        return;
    }
    dfs(add,x+1,true,num);
    dfs(add,x+1,false,num);
    if(flag){
        add -= a[x];
        num--;
    }
    return;
}


int main(){
    scanf("%d %d",&n,&k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a[i]);
    }
    dfs(0,1,false,0);
    dfs(0,1,true,0);
    printf("%d",ans);
    return 0;
}