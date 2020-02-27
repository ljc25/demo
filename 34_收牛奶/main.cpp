/* P1203 混合牛奶 Mixing Milk */
#include<bits/stdc++.h>
using namespace std;

int m,n;  // m代表牛奶总量  n代表奶民
struct milkp{
    int num;
    int price;
    // int avg;
}a[5005];

int sum,ans,temp;

bool cmp(milkp&x,milkp&y)
{
    if(x.price!=y.price)return x.price<y.price;
    else return x.num>y.num;
}
int main(){
    cin >>m >> n;
    for(int i =0;i<n;i++)
        cin >> a[i].price >> a[i].num;
    sort(a,a+n,cmp);
    for(int i =0;i<n;i++)
    {
        if(sum < m)
        {
            sum +=a[i].num;
            ans +=(a[i].price*a[i].num);
        }
        else if(sum > m)
        {
            temp = sum - m;
            ans -=(a[i-1].price*a[i-1].num);
            ans +=(a[i-1].price*temp);
            sum = m;
            break;
        }
        else if(sum == m) break;
    }
    cout << ans;
    return 0;
}