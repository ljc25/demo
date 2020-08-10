/* P1614 爱与愁的心痛 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100001],minn=100000,t=0;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=1;i<=n-m+1;i++)
    {
        for (int j=1;j<=m;j++)
        {
           t+=a[i+j-1];
        }
        if (t<minn)minn=t;
        t=0;
    }
    printf("%d",minn);
    return 0;
}