/* 单层汉诺塔的公式解法 + 手写高精 */
#include <bits/stdc++.h>

using namespace std;

int n,len;  //记录层数
int a[10000];

void gj(){
    for (int i = 1; i <=len; i++) a[i]*=2;
    for (int i = 1; i <=len; i++)
    {
        if(a[i]>9){
            a[i+1]++;
            a[i]-=10;
        }
    }
    if(a[len+1]>0) len++;    //如果最高位数有变化，更新len
}

int main(){
    cin >> n;
    a[1]=1;
    len = 1;
    for(int i=0;i<n;i++) gj();
    for(int i=len;i>1;i--) cout << a[i];
    cout << a[1] - 1;
    return 0;
}