#include<bits/stdc++.h>

using namespace std;

char mapw[101][101];
char mapw2[101][101];
int m;
char n;
bool flag = true;

int main(){
	scanf("%c %d",&n,&m);
	getchar();
	for(int i = 1;i<=m;i++)
	{
		for(int j = 1;j<=m;j++)
		{
			scanf("%c",&mapw[i][j]);
		}
		getchar();
	}
		

	for(int i = m;i>0;i--)
	{
		for(int j = m;j>0;j--){
			if(mapw[i][j]=='@')
			{
				mapw2[m-i+1][m-j+1]=n;
				if(flag&&mapw[m-i+1][m-j+1]==' ')
					flag=false;
			}		
		}
	}

	if(flag) cout << "bu yong dao le"<<endl;
	for(int i = 1;i<=m;i++)
	{
		for(int j = 1;j<=m;j++){
				cout << mapw2[i][j];
		}
		printf("\n");
	}

		
	return 0;
}