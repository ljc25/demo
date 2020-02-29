/* P1080 国王游戏 
   未加高精度   50分 naive
*/
#include <bits/stdc++.h>
using namespace std;

struct minister{
    long long left,right,lr;
    bool operator < (const minister t)
    {
        if(left*right!=t.left*t.right) return left*right<t.left*t.right;
        else return right < t.right;
    }
}mi[1001];

int m;  // m个大臣
long long sum;

// bool cmp(minister&x,minister&y)
// {
//     if(x.lr!=y.lr) return x.lr < y.lr;
// }

int main()
{
    cin >> m >> mi[0].left >> mi[0].right;
    sum = mi[0].left;
    for(int i = 1;i<=m;i++)
    {
        cin >> mi[i].left >> mi[i].right;
        mi[i].lr = mi[i].left * mi[i].right;
        sum *= mi[i].left;
    }
    sort(mi+1,mi+1+m);
    // for(int i = 1;i<=m;i++)
    // {
    // }
    cout << sum / (mi[m].left * mi[m].right);
}