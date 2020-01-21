#include<bits/stdc++.h>

using namespace std;
priority_queue<int,vector<int>,greater<int> > que;

priority_queue<int> a; //默认降序
//等同于 priority_queue<int, vector<int>, less<int> > a;
priority_queue<string> b;

const int N=100001;
int a[N];
int n;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        que.push(a[i]);//边读入便放入队列
    }
    while(!que.empty())
    {
        printf("%d ",que.top());//直接输出
        que.pop();
    }
    return 0;//完美！
}