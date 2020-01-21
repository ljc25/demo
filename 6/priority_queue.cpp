#include<bits/stdc++.h>

using namespace std;

priority_queue<int,vector<int>,greater<int> > que;//定义优先队列，至于为何这样定义，上网查查。。。

priority_queue<int> c; //默认降序
//等同于 priority_queue<int, vector<int>, less<int> > c;
priority_queue<string> b;

int a[1000001];
int n;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        que.push(a[i]);//边读入便放入队列
    }
    while(!que.empty())
    {
        cout<< que.top() <<" ";
        que.pop();
    }
    return 0;
}
