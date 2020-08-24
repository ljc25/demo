/* P5602 小E与美食 */
#include <bits/stdc++.h>

using namespace std;

int n,a[300001];
long long sum;
double maxn;

int main(){
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+1+n);
    for(int i = n;i>0;i--){
        sum += a[i];
        maxn = max(maxn,sum*1.0/(n-i+1)*sum);
    }
    printf("%lf",maxn);
    return 0;
}
