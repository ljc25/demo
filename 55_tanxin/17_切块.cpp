/* P1324 矩形分割 */
#include <bits/stdc++.h>

using namespace std;

int n, m;           // 长 n 宽 m
int s1 = 1, s2 = 1; // s1 长的数组下标    s2 宽的数组下标
int a[2020], b[2020];
long long ans;

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < m; i++)
        cin >> b[i];
    sort(a + 1, a + 1 + n, cmp);
    sort(b + 1, b + 1 + m, cmp);
    for(int i = 2;i<n+m;i++){
        if (a[s1] > b[s2])
            ans += s2 * a[s1++];
        else
            ans += s1 * b[s2++];
    }
    cout << ans;
    return 0;
}