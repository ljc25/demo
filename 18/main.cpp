/* P1583 魔法照片 */
#include <bits/stdc++.h>

using namespace std;

int n,k;
int e[10];           // 额外权值

struct people{
    int w;    // 权值
    int num;  // 编号
    int d;    // 类别
}p[20001];

bool cmp(struct people&x,struct people&y)
{
    if(x.w!=y.w) return x.w>y.w;
    else return x.num<y.num;
} 

void something()
{
    sort(p,p+n,cmp);
    for(int i = 0;i<n;i++)
    {
        p[i].d = i % 10;
        p[i].w += e[p[i].d];
    }
    sort(p,p+n,cmp);
}

int main()
{
    cin >> n >> k;
    for(int i = 0;i<10;i++)
        cin >> e[i];
    for(int i = 0;i<n;i++)
    {
        cin >> p[i].w;
        p[i].num = i + 1;
    }

        something();

    for(int i = 0;i<k;i++)
        cout << p[i].num << " ";
    return 0;
}

