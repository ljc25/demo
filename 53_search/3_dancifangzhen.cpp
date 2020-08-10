/* P1101 单词方阵 */
#include <bits/stdc++.h>

using namespace std;

int n;
string str = "yizhong";
char a[101][101];
int vis[101][101];
int next1[8][2]={{1,0},{0,1},{1,1},{1,-1},{-1,1},{-1,-1},{0,-1},{-1,0}};

void dfs(int x,int y,int z){
    int c = x,b = y;
    for(int i = 0;i<7;i++){
        if(a[c][b]!=str[i]) return;
        c += next1[z][0];
        b += next1[z][1];
    }
    for(int i = 0;i<7;i++){
        vis[x][y] = 1;
        x += next1[z][0];
        y += next1[z][1];
    }
}

int main(){
    cin >> n;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++)
            cin >> a[i][j];
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(a[i][j]=='y'){
                    for(int k = 0;k<8;k++)
                        dfs(i,j,k);
            }
        }
    }
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(vis[i][j])
                cout << a[i][j];
            else
                cout << "*";
        }
        cout << endl;
    }
        
    return 0;
}