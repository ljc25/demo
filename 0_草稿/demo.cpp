#include <bits/stdc++.h>

using namespace std;

int n; //长度
int a[100001],b[100001],c[100001],d[100001];
char e;

void add(){
	for(int i = n;i>0;i--){
		d[i] += (c[i]+b[i]);
		if(d[i]>=a[i]){
			d[i+1] += d[i]/a[i];
			d[i] %= a[i];
		}
	}
}

void sub(){
	for(int i = n;i>0;i--){
		d[i] += (b[i]-c[i]);
		if(d[i]<0){
			d[i] += a[i];
			d[i-1]--;
		}
	}
}

int main(){
	//读入操作数位数
	scanf("%d",&n);

	//读入进制数
	for(int i = 1;i<=n;i++)
		scanf("%d",&a[i]);
	
	//读入两个操作数
	for(int i = 1;i<=n;i++)
		scanf("%d",&b[i]);
	do{
		e = getchar();
	}while(e!='+'&&e!='-');
	for(int i = 1;i<=n;i++)
		scanf("%d",&c[i]);
	(e=='+')?add():sub();

	for(int i = n;i>0;i--){
		cout << d[i] << " ";
	}

    return 0;
}