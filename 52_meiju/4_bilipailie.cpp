/* P1618 三连击（升级版） */
#include <bits/stdc++.h>

using namespace std;

int a,b,c,temp1,temp2,temp3;
int d[10];
bool book[10];
bool flag;

void dfs(int m){
    if(m>9){
        temp1 = d[1]*100+d[2]*10+d[3];
        temp2 = d[4]*100+d[5]*10+d[6];
        temp3 = d[7]*100+d[8]*10+d[9];
        if((temp1*b/a == temp2) && (temp1*c/a == temp3)){
            printf("%d%d%d %d%d%d %d%d%d\n",d[1],d[2],d[3],d[4],d[5],d[6],d[7],d[8],d[9]);
            flag = true;
        }
        return;
    }
    for(int i = 1;i<=9;i++){
        if(book[i]==0){
            d[m] = i;
            book[i]=1;
            dfs(m+1);
            book[i]=0;
        }
    }
    return;
}


int main(){
    scanf("%d %d %d",&a,&b,&c);
    dfs(1);
    if(!flag) printf("No!!!");
    return 0;
}