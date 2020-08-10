#include <bits/stdc++.h>

using namespace std;

int n,w1,w2,m,t1,t2,ans=999999999;
// int map1[10000001][100001];
int p[10001];
int l[10001];

int min(int a,int b,int c)
{
    int temp=a;
	if(b<a) temp=b;
	if(temp>c) temp=c;
	return temp;
}

int dfs(int x,int y,int w){
    if(x>n||y>n) return 999999999;
    if(x==n&&y==n){
        ans = min(ans,w);
        return ans;
    }
    if(p[x]==1 && l[y]==1){
        int temp1,temp2,temp3;
        temp1 = dfs(x,y+1,w+w1);
        temp2 = dfs(x+1,y,w+w1);
        temp3 = dfs(x+1,y+1,w+w2);
        return min(temp1,temp2,temp3);
    }
    else{
        int temp1,temp2;
        temp1 = dfs(x,y+1,w+w1);
        temp2 = dfs(x+1,y,w+w1);
        return min(temp1,temp2);
    }
}

int main(){
    cin >> n >> m >> w1 >> w2;
    while(m--){
        cin >> t1 >> t2;
        p[t1] = 1;
        l[t2] = 1;
    }
    cout << dfs(0,0,0);
    return 0;
}