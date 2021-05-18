#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
vector<int> ids[MAXN]; //容器数组
int n, d, k, ts, id;
int judge(int i)
{
    sort(ids[i].begin(), ids[i].end()); //i号帖子按点赞时间排序
    for (vector<int>::iterator l = ids[i].begin(), r = ids[i].begin(); r != ids[i].end();)
    {
        //cout<<"时长:"<<*r-*l<<"点赞:"<<r-l+1<<" 帖子编号:"<<i<<endl;
        if (*r - *l < d && r - l + 1 >= k)
            return i; //d时间段内赞数超过k证明i号帖子是热贴，返回该贴编号
        //左l右r滑窗法，若左右间距超过时间间隔d，左边框右滑，否则右边框右滑累积（左右边框内的点赞数）
        if (*r - *l >= d)
            l++;
        else
            r++;
    }
    return -1; //负一表示非热贴
}
int main()
{
    int len = 0;
    cin >> n >> d >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> ts >> id;
        ids[id].push_back(ts); //将ts时间的点赞信息推入id号帖子（容器）
        if (id > len)
            len = id; //最大帖子编号
    }
    for (int i = 0; i <= len; i++)
    {
        if (judge(i) != -1)    //判断是否热贴
            cout << i << endl; //输出热贴编号
    }
    return 0;
}