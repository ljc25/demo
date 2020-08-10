/* P1610 鸿山洞的灯 */
#include <bits/stdc++.h>

using namespace std;

int n,dist,ans;
int a[100001];

int main(){
    scanf("%d %d",&n,&dist);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 1;i<n-1;i++)
        if(a[i-1]!=0&&a[i+1]-a[i-1]<=dist)
            a[i] = 0,ans++;
        else{
            int j = i - 1;
            while(a[j]==0){
                j--;
            }
            if(a[i+1]-a[j]<=dist)
                a[i] = 0,ans++;
        }
    cout << ans;
    return 0;
}