/* 最后一个点爆了   哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈 */
#include <bits/stdc++.h>
using namespace std;

set<string> c;
map<string,double> b;
vector<string> a;
queue<string> d;
int m,n; //关注列表里面的 m 个人   点赞了n个人
double sum,num;
bool flag = false;
string str;
int main() {
    scanf("%d",&m);
    getchar();
    while(m--)
    {
        cin >>str;
        a.push_back(str);
    }
    scanf("%d",&n);
    int k = n;
    while(n--)
    {
        cin >> str >> num;
        b[str]=num;
        sum+=num;
        d.push(str);
    }
    sum/=k;
    for(int i = 0;i<k;i++)
    {
       if(b[d.front()]>sum&&(find(a.begin(),a.end(),d.front())==a.end()))
                        //注意此处的find，可以改为标记法，用一个map标记朋友的为1，可直接判断是否为1即可
       {
           c.insert(d.front());
           flag = true;
       }
       d.pop();
    }
    if(!flag) cout << "Bing Mei You";
    else
        for(set<string>::iterator it = c.begin();it!=c.end();it++)
            cout << *it << endl;
    return 0;
} 