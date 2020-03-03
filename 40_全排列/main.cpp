/* 生成 1 ~ n 全排列 */
#include <bits/stdc++.h>

using namespace std;
int a[100];

void dfs(int x,int y)
{
    if(x==y)
    {
        for(int i = 1;i<y;i++)  cout << a[i] << " ";
        cout << a[y] << endl;
        return;
    }
    for(int i = x;i<=y;i++)
    {
		swap(a[i],a[x]);
		dfs(x+1,y);
		swap(a[i],a[x]);
    }
}

int main()
{
    int n;
    cin >> n;
	for(int i =1;i<=n;i++)
		a[i] = i;
    dfs(1,n);
    return 0;
}
