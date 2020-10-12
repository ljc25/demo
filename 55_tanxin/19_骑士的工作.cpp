// P2695 骑士的工作
#include <bits/stdc++.h>

using namespace std;

int n, m;                // n 个 头    m 个人,每个人可以砍的头的大小不一样
int a[20005], b[20005];  // a 储存 龙的头   b 储存骑士可以砍的头
int ans;                 // 得到的金币

int main()
{
    freopen("in.txt","r",stdin);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    if (n > m)
    { //如果恶龙数大于骑士的数量，则输出you died!
        cout << "you died!";
        return 0;
    }
    // 对两个读入的数据从大到小排序
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + m);

    int j = 1,i = 1;
    for(;i<=n;i++){
        while(a[i]>b[j]) j++;   // 找到第一个大于龙头的骑士
        ans += b[j];
        if (j >= m)
            break;
        j++;
    }
    if(i-1!=n)
        cout << "you died!";
    else
        cout << ans;
    return 0;
}