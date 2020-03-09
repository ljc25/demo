/* 7-6 列车调度
   两端分别是一条入口（Entrance）轨道和一条出口（Exit）轨道，它们之间有N条平行的轨道。每趟列车从入口
   可以选择任意一条轨道进入，最后从出口离开。在图中有9趟列车，在入口处按照{8，4，2，5，3，9，1，6，7}的
   顺序排队等待进入。如果要求它们必须按序号递减的顺序从出口离开，则至少需要多少条平行铁轨用于调度 */
#include <bits/stdc++.h>

using namespace std;

set<int> s;
int n,x;

int main()
{
    cin >> n;
/*     set<int>::iterator it; */
    for(int i = 0;i<n;i++)
    {
        cin >> x;
        if(s.upper_bound(x)!=s.end())
            s.erase(s.upper_bound(x));
        s.insert(x);

        /* //输出每一次输入数据之后，set的情况
        for(it= s.begin();it!=s.end();it++)
            cout << *it << " ";
        cout << endl; */

    }
    cout << s.size();
    return 0;
}