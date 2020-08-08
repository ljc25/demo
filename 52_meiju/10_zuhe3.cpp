#include <bits/stdc++.h>

using namespace std;

int m,n;
int a[22],book[21];

void dfs(int k){
	if(k>n){
		for(int i = 1;i<=n;i++){
			printf("%3d",a[i]);
		}
		printf("\n");
		return;
	}
	for(int i = a[k-1];i<=m;i++){
		if(!book[i]){
			a[k] = i;
			book[i] = 1;
			dfs(k+1);
			book[i] = 0;
		}
	}
}

int main(){
	a[0] = 1;
    scanf("%d %d",&m,&n);
	dfs(1);
    return 0;
}