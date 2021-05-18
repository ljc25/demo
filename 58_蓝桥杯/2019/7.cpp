#include <bits/stdc++.h>

using namespace std;

int a[100001];
int FullTree;

int main()
{
    int n,deep = 1,sum=0,max_num=0,max_deep=0;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
        sum += a[i];
        FullTree = 0;
        if(i==pow(2,deep)-1){
            if(max_num<sum){
                max_deep = deep;
                max_num = sum;
            }
            sum = 0;
            deep++;
            FullTree = 1;
        }
    }
    if(!FullTree&&max_num<sum){
        max_deep = deep;
        max_num = sum;
    }
    cout << max_deep;
    return 0;
}