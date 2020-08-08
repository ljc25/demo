/* P3654 First Step (ファーストステップ) */
#include <bits/stdc++.h>

using namespace std;

int n,m,k,ans;
char map1[101][101];
int dx[2] = {0,1},dy[2]={1,0};

void dfs(int x,int y,int i,int j){
	if(j>k){
		ans++;
		return;
	}
	if(map1[x][y]!='.'||x<0||y<0||x>=n||y>=m)
		return;
	dfs(x+dx[i],y+dy[i],i,j+1);
	return;
}

int main(){
    cin >> n >> m >> k;
	for(int i = 0;i<n;i++)
		cin >> map1[i];
	for(int i = 0;i<n;i++)
		for(int j = 0;j<m;j++){
			if(map1[i][j]=='.')
				for(int r = 0;r<2;r++)
					dfs(i,j,r,1);
		}
	if(k==1) ans/=2;
	cout << ans;
    return 0;
}