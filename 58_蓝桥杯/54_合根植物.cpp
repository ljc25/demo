#include <bits/stdc++.h>

using namespace std;
int pre[1000000];

// 查找掌门人
int unionsearch(int root) 
{
    int tmp,son;
    son = root;
    while (root != pre[root]) // 查找掌门人
    {
        root = pre[root];
    }
    while (son != root) //路径压缩算法
    {
        tmp = pre[son];
        pre[son] = root;
        son = tmp;
    }
    return root;
}

int main()
{
    int n, m;
    int x, xx, y, yy;
    cin >> n >> m;
    int count = n * m; // 总共多少侏植物
    for (int i = 1; i <= count; i++)
        pre[i] = i;
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cin >> x >> y;
        xx = unionsearch(x);
        yy = unionsearch(y);
        if(xx!=yy){
            pre[xx] = yy;
            count --;
        }
    }
    cout << count << endl;
    return 0;
}