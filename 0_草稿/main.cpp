#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    double ch[10005][15];
    double sum[10005]={0};
    double ave[10005];
    cin>>n>>k>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cin>>ch[i][j];
            sum[i]+=ch[i][j];
        }
        sort(ch[i],ch[i]+k);
        sum[i]=sum[i]-ch[i][0]-ch[i][k-1];
        ave[i]=sum[i]/(double)(k-2);
    }
    sort(ave,ave+n);
    for(int t=n-m;t<n;t++)
    { 
        if(t==n-m) printf("%.3lf",ave[t]);
        else printf(" %.3lf",ave[t]);
    }
    return 0;
}