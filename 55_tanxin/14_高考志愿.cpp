/* P1678 烦恼的高考志愿 */
#include <bits/stdc++.h>

using namespace std;

int num, m, n, ans; // m所学校    n个学生
int a[100001], b[100001];

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    sort(a + 1, a + 1 + m);

    for (int i = 1; i <= n; i++)
    {
        // 找到第一个高于估分的学校
        int l = 1, r = m ; //定义左边界与右边界
        while (l < r)
        {
            int mid = (l + r) / 2; //取查找范围的中间值
            if (a[mid] <= b[i])    //如果录取分数线数组中的第mid个元素小于或等于那位同学的分数
            {
                l = mid + 1; //左边界就往右移
            }
            else
            {
                r = mid; //右边界就往左移
            }
        }
        if (b[i] <= a[1]) //预估分数低于最低学校分数录取线
        {
            ans += a[1] - b[i];
        }
        else
        {
            ans += min(abs(a[l - 1] - b[i]), abs(a[l] - b[i])); //加上两个绝对值中最小
        }
    }
    cout << ans;
    return 0;
}