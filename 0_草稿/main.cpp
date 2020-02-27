#include <bits/stdc++.h>
using namespace std;

int m;   // m 场比赛
int ans; // 能参加多少场比赛
struct text
{
    int start;    // 开始时间
    int end;      // 结束时间
} t[1000003];

int temp,k=1;
bool a[1000003];

bool cmp(text &x, text &y)
{
    if (x.end != y.end) return x.end<y.end;
    else return x.start < y.start;
}
int main()
{
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> t[i].start >> t[i].end;
    }
    sort(t, t + m, cmp);
    temp = t[0].end;
    while(k<m)
    {
        if(t[k].start>=temp) 
        {
            ans++;
            temp = t[k].end;
        }
        k++;
    }
    cout << ans + 1;
    return 0;
}