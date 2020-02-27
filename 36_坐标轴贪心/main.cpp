/* P1803 凌乱的yyy / 线段覆盖
在一个数轴上有n条线段，现要选取其中k条线段使得这k条线段两两没有重合部分，问最大的k为多少。

最左边的线段放什么最好？

显然放右端点最靠左的线段最好，从左向右放，右端点越小妨碍越少

其他线段放置按右端点排序，贪心放置线段，即能放就放
 */
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