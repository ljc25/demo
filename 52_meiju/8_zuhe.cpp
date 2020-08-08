/* P1157 组合的输出 */
#include <bits/stdc++.h>

using namespace std;

int n,m;
int a[21];

void dfs(int num){
	if(num > m){
		for(int i = 1;i<=m;i++)
			cout<<setw(3)<<a[i];
		printf("\n");
		return;
	}
	for(int i = a[num-1]+1;i<=n;i++){
		a[num] = i;
		dfs(num+1);
	}
	return;
}

int main(){
    scanf("%d %d",&n,&m);
	dfs(1);
    return 0;
}