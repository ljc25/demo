#include <bits/stdc++.h>

using namespace std;

int N;                      //记录操作次数
int maxnum;                    //记录当前仓库内最大集装箱的重量
int x,y;
stack<int> b;
stack<int> a;  
int num;

int main()
{
    scanf("%d",&N);
    while(N--)
    {
        cin>>x;
        if(x==0)
        {
            cin >> y;
            b.push(y);
            if(a.empty()||y>a.top())
            a.push(y);
            else
            a.push(a.top());
        }
        else if(x==1)
        {
            a.pop();
            b.pop();
        }
        else if(x==2)
        {
            if(a.empty())
            cout << 0 << endl;
            else
            cout << a.top() <<endl;
        }
    }
    return 0;
}