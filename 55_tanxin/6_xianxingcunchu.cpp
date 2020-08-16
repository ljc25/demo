#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;
struct node{
	int val,id;//val存长度*频率的值，id存这个数据的编号
}a[10010];

bool cmp(node x,node y){
	return x.val>y.val;
}//按照（长度*频率）从大到小排序

int main(){
	cin>>n;
	for (int i=1;i<=n;++i){
		int x,y;
		cin>>x>>y;
		a[i].val=x*y;//这里并不用把频率转化成小数来算，因为他们的比例是一定的，而且也不会爆int
		a[i].id=i;
	}
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n;++i) cout<<a[i].id<<" ";
	return 0;
}