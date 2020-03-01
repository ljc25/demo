#include<bits/stdc++.h>
using namespace std;
int m,n,y,l;  // m个朋友圈，n表示朋友圈的人数，x表示朋友圈里的人，y要查的人数，z要查的人，l帅哥数组索引
string z,x;
bool t;           // 判断是否有帅哥
map<string,int>a;    // 标记是否有朋友，有朋友设为1
queue<string>ans;  // 帅哥数组
int main(){
    cin >>m; // m个朋友圈
    for(int i =0 ;i<m;i++)
    {
        cin >> n;// n表示朋友圈的人数，
        if(n>=2) // 给朋友圈人数大于2的处理
        {
        for(int j =0;j<n;j++)
        {
            cin >> x;
            a[x]=1;   //标记为1表示他有朋友
        }
        }
        else   //自恋狂不做处理
            cin >> x;
    }
    cin >> y;  //要判断的人数
    for(int i =0;i<y;i++)
    {
        cin >> z; //编号
        if(a[z]==0) //如果没有，加入帅哥数组
        {
            ans.push(z);
            a[z]=1; //赋值为1，假装有朋友，避免重复判断
            t = true; //有帅哥
        }
    }

    if(t != true) cout << "No one is handsome";
    else
    {
        while(ans.size()>1)
        {
            cout << ans.front() << " ";
            ans.pop();
        }
        cout << ans.front();
    }
    return 0;
}
