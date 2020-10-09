// 求整数数组中相差最小的两个元素（称为最接近数）的差值
#include <bits/stdc++.h>

using namespace std;

int n;        // 数组长度
int a[10001],b[10001];

bool cmp(int x,int y){
    return x>y;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n-1; i++)
    {
        b[i] = a[i]-a[i+1];
    }
    sort(b,b+n-1);
    cout << b[0];
    return 0;
}