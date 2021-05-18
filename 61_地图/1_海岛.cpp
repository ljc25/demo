#include <bits/stdc++.h>
using namespace std;

char maps[1001][1001];

void dfs1(int x, int y)
{
    if (maps[x][y] != '#')
        return;
    maps[x][y] = '1'; //将#标记为1
    dfs1(x + 1, y);   //把整个岛都进行标记 防止重复计算
    dfs1(x - 1, y);
    dfs1(x, y + 1);
    dfs1(x, y - 1);
}

void dfs2(int x, int y)
{
    if (maps[x][y] == '.')
        return;
    if (maps[x + 1][y] == '1' && maps[x - 1][y] == '1' && maps[x][y + 1] == '1' && maps[x][y - 1] == '1') //四周都是陆地 则标记为2
    {
        maps[x][y] = '2';
    }
    dfs1(x + 1, y); //找4个方向
    dfs1(x - 1, y);
    dfs1(x, y + 1);
    dfs1(x, y - 1);
}

void dfs3(int x, int y)
{
    if (maps[x][y] == '.')
        return;
    maps[x][y] = '.'; //将#标记为 .
    dfs3(x + 1, y);   //把整个岛都进行沉没操作 防止重复计算
    dfs3(x - 1, y);
    dfs3(x, y + 1);
    dfs3(x, y - 1);
}

int main()
{
    int n, first_num = 0, end_num = 0; //层数 初始岛屿数量 末尾岛屿数量
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            while (1)
            {
                scanf("%c", &maps[a][b]);
                if (maps[a][b] == '.' || maps[a][b] == '#')
                    break;
            }
        }
    }
    //先查找有多少个岛屿
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            if (maps[a][b] == '#')
            {
                dfs1(a, b);
                first_num++; //初始岛屿+1
            }
        }
    }
    //再对整个岛屿进行变化
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            if (maps[a][b] == '1')
            {
                dfs2(a, b);
            }
        }
    }
    //最后查找剩余多少个岛屿
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            if (maps[a][b] == '2')
            {
                dfs3(a, b);
                end_num++; //最终岛屿+1
            }
        }
    }

    cout << first_num - end_num;
    return 0;
}