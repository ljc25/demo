#include<iostream>
#include<queue> 
using namespace std;

const int N=1005;
int n,m,k,nums;
char map[N][N];
struct Point{
	int x,y;
	Point(){}
	Point(int a,int b):x(a),y(b){}
};
int go[][2]={{-1,0},{1,0},{0,-1},{0,1}};	//四种行走方式 
queue<Point> q;

int bfs(int num)
{
	int fixnum=0;
	while(!q.empty() && num--){
		Point p=q.front();q.pop();   //这里弹出是因为 一个点经过一次扩张，在这之后每次扩张这个点的周围
                                     //已经扩张所以可以省略，正好可以读到后面的土地数
		for(int i=0;i<4;i++){
			int x=p.x+go[i][0],y=p.y+go[i][1];
			if(x>=1 && x<=n && y>=1 && y<=m && map[x][y]=='.'){
				fixnum++;
				map[x][y]='g';
				q.push(Point(x,y));
			}
		}
	}
	return fixnum;   //记录当前草的块数
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)			//录入初始情况 
		for(int j=1;j<=m;j++){
			cin>>map[i][j];
			if(map[i][j]=='g'){
				nums++;
				q.push(Point(i,j));
			}
		}
	cin>>k;
	while(k--) nums=bfs(nums);		//k次bfs   每一次返回当前地图中的草的块数
	for(int i=1;i<=n;i++){			//输出最终情况 
		for(int j=1;j<=m;j++)
			cout<<map[i][j];
		cout<<endl;
	}
	return 0;
}

/* #include <bits/stdc++.h>

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
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << map1[i][j];
        cout << endl;
    }
    return 0;
} */