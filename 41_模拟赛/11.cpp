#include <bits/stdc++.h>

using namespace std;
int x,y,z;
int num[10001][11];
int ans[10001];
double sum,pre[10001];
int maxnum=-9999999,minnum=999999;

int main()
{
    cin >> x >> y >> z;
    for(int i=0;i<x;i++)
    {
        sum = 0,maxnum=-9999999,minnum=999999;
        for(int j=0;j<y;j++)
        {
            cin >> num[i][j];
            sum+=num[i][j];
            maxnum=max(num[i][j],maxnum);
            minnum=min(num[i][j],minnum);
        }
        sum = sum - maxnum - minnum;
        cout << "sum["<<i<<"]=" << sum <<endl;
        pre[i]=sum*1.0/(y-2);
    }
        
    sort(pre,pre+x);
    for(int i =x-z;i<x;i++)
    {
        if(i=x-z) printf("%.3lf",pre[i]);
        else printf(" %.3lf",pre[i]);
        
    }
    return 0;
}