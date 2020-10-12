#include <bits/stdc++.h>
using namespace std;

map<int,int> a;

int dfs(int x){
    if(x==1) return 1;
    if(x==2) return 2;
    if(a.find(x)!=a.end()) return a[x];
    else {
        int value = dfs(x-1) + dfs(x-2);
        a[x]=value;
        return value;
    }
}

int main()
{
    int n;
    cin >> n;
    int ans = dfs(n);
    cout << ans;
    return 0;
}