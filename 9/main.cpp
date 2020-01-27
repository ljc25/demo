#include<bits/stdc++.h>

using namespace std;

struct node
{
    string x; //装票数
    int num;  //装号数
    int lenx; //装票数的位数
}s[25];

bool cmp(node a,node b)
{
    if(a.lenx!=b.lenx) return a.lenx>b.lenx; //前一个比后一个位数多，不交换
    else if(a.x!=b.x) return a.x>b.x; //位数相同，但前一个按字典序排列比后一个大，也不交换。
    return 0; //剩下情况均要交换。
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i].x;
        s[i].num=i; //存号数
        s[i].lenx=s[i].x.size(); //存票数的位数
    }
    sort(s+1,s+n+1,cmp); //排序
    cout<<s[1].num<<endl;  //输出首位答案即可，注意先输出号数
    cout<<s[1].x<<endl; //再输出票数
    return 0;
}