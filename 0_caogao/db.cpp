#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool flag = true;
    int k;
    // freopen("data.txt" ,"w" ,stdout);
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(scanf("%d",&k)!=EOF){
        int temp = k;
        int num = 0;
        while(temp!=0){
            num = num * 10 + temp%10;
            temp /= 10;
        }
        if(num==k) cout << num <<",";
    }
    

    return 0;
}