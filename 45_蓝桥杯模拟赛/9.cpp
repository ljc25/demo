#include <bits/stdc++.h>

using namespace std;
int n, m;              //n 行 m 列
char map1[1001][1001]; //地图
int map2[1001][1001];  //标记之前是否有草
int k;                 //k个月

void add(int x, int y)
{
    if (x == 0 && y == 0)
    {
        //右
        map2[x][y + 1] = 1;
        //下
        map2[x + 1][y] = 1;
    }
    else if (x == 0 && y == m - 1)
    {
        //左
        map2[x][y - 1] = 1;
        //下
        map2[x + 1][y] = 1;
    }
    else if (x == n - 1 && y == m - 1)
    {
        //左
        map2[x][y - 1] = 1;
        //上
        map2[x - 1][y] = 1;
    }
    else if (x == n - 1 && y == 0)
    {
        //上
        map2[x - 1][y] = 1;
        //右
        map2[x][y + 1] = 1;
    }
    else if (x == 0)
    {
        //左
        map2[x][y - 1] = 1;
        //右
        map2[x][y + 1] = 1;
        //下
        map2[x + 1][y] = 1;
    }
    else if (x == n - 1)
    {
        //左
        map2[x][y - 1] = 1;
        //上
        map2[x - 1][y] = 1;
        //右
        map2[x][y + 1] = 1;
    }
    else if (y == 0)
    {
        //上
        map2[x - 1][y] = 1;
        //右
        map2[x][y + 1] = 1;
        //下
        map2[x + 1][y] = 1;
    }
    else if (y == n - 1)
    {
        //左
        map2[x][y - 1] = 1;
        //上
        map2[x - 1][y] = 1;
        //下
        map2[x + 1][y] = 1;
    }
    else
    {
        //左
        map2[x][y - 1] = 1;
        //上
        map2[x - 1][y] = 1;
        //右
        map2[x][y + 1] = 1;
        //下
        map2[x + 1][y] = 1;
    }
    return;
}

int main()
{
    cin >> n >> m;
    //读入地图
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> map1[i][j];
            if (map1[i][j] == 'g')
                map2[i][j] = 1;
        }

    cin >> k;
    while (k--)
    {
        cout << k << endl;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (map1[i][j] == 'g')
                    add(i, j);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if(map1[i][j]=='.'&&map2[i][j]==1)
                    map1[i][j]='g';
            }
       /*  for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << map1[i][j];
            cout << endl;
        }
        cout << "--------" << endl; */
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << map1[i][j];
        cout << endl;
    }
    return 0;
}