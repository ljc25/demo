#include <bits/stdc++.h>

using namespace std;

int num,p=1;   // 楼梯数
int a[5001][10001];

int main(){
    scanf("%d",&num);
    a[1][1] = 1,a[2][1]=2;
    for(int i = 3;i<=num;i++){
        for(int j = 1;j<=p;j++){
            a[i][j] += (a[i-1][j]+a[i-2][j]);
            if(a[i][j]>=10){
                a[i][j+1] += a[i][j]/10;
                a[i][j] %= 10;
            }
        }
        while(a[i][p+1]>0){p++;}
    }
    for(int i = p;i>0;i--)
        printf("%d",a[num][i]);
    return 0;
}