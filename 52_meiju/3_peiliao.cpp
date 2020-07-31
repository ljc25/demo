#include <bits/stdc++.h>

using namespace std;

int N;
int a[11][2];
int temp,y,x=1,ans=999999;

void search(int m,bool flag){
    if(m>N) return;
    if(flag){
        x *= a[m][0];
        y += a[m][1];
        temp = abs(x-y);
        if(temp<ans) ans = temp;
    }
    search(m+1,true);
    search(m+1,false);
    if(flag){
        x /= a[m][0];
        y -= a[m][1];
    }
}
void search(int m){
    search(m+1,true);
    search(m+1,false);
}

int main(){
    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    search(0);
    printf("%d",ans);
    return 0;
}