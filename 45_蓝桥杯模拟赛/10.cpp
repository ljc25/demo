#include <bits/stdc++.h>

using namespace std;
int n,m;//n个节目选m个
int ans1[100001];//原数组
int ans2[100001];//用来排序标记
int a[100001]; //标记数组，用来输出
int count1;

bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
    cin >> n >> m;
    for(int i = 0;i<n;i++)
    {
        cin >> ans1[i];
        ans2[i]=ans1[i];
    }

    sort(ans2,ans2+n,cmp);
    

    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(ans2[i]==ans1[j])
                a[j]=1;
        }
    }
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(a[j]==1)
            {
                cout << ans1[j] << " ";
                a[i]=0;
                count1++;
                if(count1==m) return 0;
            }
        }
    }
    return 0;
}