#include <bits/stdc++.h>

using namespace std;

int level,answer;
int a[11];
int ans[10002][12];

void search(int total,int x){
    if(x>10){
        if(total == level){
            answer++;
            for(int i = 1;i<=10;i++)
                ans[answer][i] = a[i];
        }
        return;
    }
    for(int i = 1;i<=3;i++){
        if(total + i > level) return;
        a[x] = i;
        search(total+i,x+1);
        a[x] = 0;
    }
}

int main(){
    scanf("%d",&level);
    search(0,1);
    printf("%d\n",answer);
    for(int i = 1;i<=answer;i++){
        for(int j = 1;j<=10;j++)
            printf("%d ",ans[i][j]);
            printf("\n");
    }
    return 0;
}