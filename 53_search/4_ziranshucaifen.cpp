/* P2404 自然数的拆分问题 */
#include <bits/stdc++.h>

using namespace std;

int n;
int a[9];

void dfs(int x,int add,int num){
    if(add>n) return;
    if(add == n){
        for(int i = 0;i<num-1;i++)
            cout << a[i] << "+";
        cout << a[num-1] << endl;
        return;
    }
    for(int i = x;i<n;i++){
        a[num] = i;
        dfs(i,add+i,num+1);
        a[num] = 0;
    }
    return;
}

int main(){
    cin >> n;
    dfs(1,0,0);
    return 0;
}