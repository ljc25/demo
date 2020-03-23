#include<bits/stdc++.h>
using namespace std;

const int N=100005;
int n,m,value;
struct show{						
	int pos,value;
	show(){}
	show(int a,int b):pos(a),value(b){}
};
show p[N];
bool cmp1(show p1,show p2)	//设置的排序规则1：按节目好看程度降序排序 
{ return p1.value>p2.value; }
bool cmp2(show p1,show p2)	//设置的排序规则2：按节目的序号升序排序 
{ return p1.pos<p2.pos; }

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>value;
		p[i]=show(i,value);
	}
	sort(p,p+n,cmp1);				//第一次针对节目的好看程度进行降序排序 
	sort(p,p+m,cmp2);				//第二次针对前面最好看的m个节目的序号进行升序排序 
	for(int i=0;i<m;i++)
		cout<<p[i].value<<" ";
	return 0;
}

/*  这个代码可能有问题
#include <bits/stdc++.h>

using namespace std;
int n,m;//n个节目选m个
int ans1[100001];//原数组
int ans2[100001];//用来排序标记
int a[100001]; //标记数组，用来输出
int count1;

bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
    cin >> n >> m;
    for(int i = 0;i<n;i++)
    {
        cin >> ans1[i];
        ans2[i]=ans1[i];
    }

    sort(ans2,ans2+n,cmp);
    

    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(ans2[i]==ans1[j])
                a[j]=1;
        }
    }
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(a[j]==1)
            {
                cout << ans1[j] << " ";
                a[i]=0;
                count1++;
                if(count1==m) return 0;
            }
        }
    }
    return 0;
} */

