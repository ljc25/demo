#include <bits/stdc++.h>

using namespace std;

int n, h, a, b;   //  n个人  h行关系
int gx[101][101]; //  关系网
int kc[101][101]; // 考场安排
int num = 101;    //  最优答案

// 安排到第x个人和当前安排了kcs个考场
void DFS(int x, int kcs)
{
    if (kcs > num) // 剪枝
        return;
    if (x == n + 1)
    { //n个人全部安排玩
        num = min(num, kcs);
        return;
    }
    int j, k;
    for (j = 1; j <= kcs; j++)
    {
        k = 0;
        while (kc[j][k] && !gx[x][kc[j][k]]) //找到空位  并且和前面已经安排的同学没有关系
            k++;
        if (kc[j][k] == 0)
        {
            kc[j][k] = x;
            DFS(x + 1, kcs);
            kc[j][k] = 0; //回溯
        }
    }
    //没有符合要求的考场，需要增加考场
    kc[j][0] = x;
    DFS(x + 1, kcs + 1);
    kc[j][0] = 0;
}

int main()
{
    cin >> n >> h;
    for (int i = 1; i <= h; i++)
    {
        cin >> a >> b;
        gx[a][b] = gx[b][a] = 1;
    }
    DFS(1, 1);
    cout << num;
    return 0;
}