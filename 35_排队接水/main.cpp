/* P1094 纪念品分组 */
#include<bits/stdc++.h>
using namespace std;

int n;
double sum,ans,num;

struct people{
    double num;
    int id;
}p[1001];

bool cmp(people&x,people&y)
{
    return x.num<y.num;
}

int main(){
    cin >> n;
    for(int i = 1;i<=n;i++)
        cin >> p[i].num,p[i].id=i;
    sort(p+1,p+n+1,cmp);
    for(int i = 1;i<=n;i++)
    {
        cout << p[i].id << " ";
        sum += (p[i].num*(n-i));
    }
    cout << endl;
    ans = sum/n;
    printf("%0.2lf",ans);
    // cout << ans;
    return 0;
}