#include <bits/stdc++.h>

using namespace std;

struct people{
    int score,id;
};

people a[5001];

int n,m;    //n个人   录取 m个人
int expect; // 预料人数
int num;  
int d,c=1;
bool po = false;

bool cmp(people &x,people &y)
{
    if(x.score!=y.score) return x.score>y.score;
    else if(x.id!=y.id) return x.id<y.id;
    return 0;
}


int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i].id >> a[i].score;

    sort(a+1,a+n+1,cmp);
    expect = m*1.5;
    num = expect;

    while(a[expect].score==a[expect+1].score)    //统计预期之外的人数
    {
        num++;
        expect++;
    }

    while(c<=num)      //相同分数按学号排序
    {
        if(a[c].score!=a[c+1].score)
        c++;
        else
        {
            po = true;
            d = c;
            while(a[c].score==a[c+1].score)
            {
                c++;
            }
            sort(a+d+1,a+c+1,cmp);
            po=false;
        }
    }

    cout << a[num].score << " "<< num<<endl;

    for(int i = 1;i<=num;i++)
    cout << a[i].id <<" "<<a[i].score <<endl;
    return 0;
}