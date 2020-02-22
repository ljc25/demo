/* 传送带传送货物 Allocation */
#include <bits/stdc++.h>

using namespace std;

int n,k;
int a[100000];

int check( long long P)
{
    int i = 0;
    for(int j = 0;j<k;j++)
    {
        long long s = 0;
        while(s+a[i]<= P)
        {
            s+=a[i];
            i++;
            if(i==n) return n;
        }
    }
    return i;
}

long long search()
{
    long long left = 0;
    long long right = 100000*10000;
    long long mid;
    while(left< right)
    {
        mid = (left+right)/2;
        int v = check(mid);
        if(v >= n) right = mid - 1;
        else left = mid + 1;
    }
    return right;
}

int main()
{
    cin >> n >> k;
    for(int i = 0 ;i<n;i++)
        cin >>a[i];
    long long ans = search();
    cout << ans;
    return 0;
}