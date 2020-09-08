/* P1109 学生分组 */
#include <bits/stdc++.h>

using namespace std;

int minNum,maxNum,ans,n,L,R,a[51];
double num;

int main()
{
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
        num += a[i];
    }
    num /= n;
    cin >> L >> R;
    if (num < L||num >R){
        cout << "-1";
        return 0;
    }
    sort(a+1,a+n+1);
    int temp_left=1,temp_right=n;
    while(a[temp_left]<L){
        minNum += (L-a[temp_left]);
        temp_left ++;
    }
    while (a[temp_right] > R)
    {
        maxNum += (a[temp_right]-R);
        temp_right--;
    }
    if(maxNum >= minNum){
        ans = maxNum;
    }else{
        ans = minNum;
    }
    cout << ans;
    return 0;
}