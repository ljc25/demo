/* P1706 全排列问题 */
#include <bits/stdc++.h>

using namespace std;

int n;
int a[12],book[12];

void dfs(int x){
	if(x>n){
		for(int i = 1;i<=n;i++){
			// printf("%5d",a[i]);
			printf("%d", a[i]);
		}
		printf("\n");
		return;
	}
	for(int i = 1;i<=n;i++){
		if(!book[i]){
			a[x] = i;
			book[i] = 1;
			dfs(x+1);
			book[i] = 0;
		}
	}
	return;
}

int main(){
    scanf("%d",&n);
	dfs(1);
    return 0;
}