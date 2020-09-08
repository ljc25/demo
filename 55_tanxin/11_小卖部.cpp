/* P5639 【CSGRound2】守序者的尊严 */
#include <bits/stdc++.h>

using namespace std;

int temp,n,ans=1,a[1000001];

int main()
{
    cin >> n >> temp;
    for(int i = 2;i<=n;i++){
        cin >> a[i];
        if(a[i]!=temp){
            ans++;
            temp = a[i];
        }
    }
    cout << ans;
    return 0;
}