/* string 类型 */
#include <bits./stdc++.h>

using namespace std;
int n;
string a;

void dfs(int x,int y)
{
    if(x==y)
    {
        for(int i = 0 ;i<y-1;i++)
        {
            cout << a[i] << " ";
        }
        cout << a[y-1] << endl;
        return;
    }
    for(int i = x;i<y;i++)
    {
        swap(a[i],a[x]);
        dfs(x+1,y);
        swap(a[i],a[x]);
    }
}
int main()
{
    cin >> a;
    dfs(0,a.length());
    return 0;
}