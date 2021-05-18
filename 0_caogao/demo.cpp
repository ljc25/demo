/* #include <iostream.h>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h> */
#include <bits/stdc++.h>

using namespace std;

int main(){
	clock_t start,end;
	long times;
	long long x,e,n;
	cout<<"随机产生3个大数:"<<endl;
	//x=1000*(rand()%11)+100*(rand()%11)+10*(rand()%11)+rand()%11;
	x=1000000*(rand()%11)+100000*(rand()%11)+10000*(rand()%11)+1000*(rand()%11)+
		100*(rand()%11)+10*(rand()%11)+rand()%11;
	e=1000000*(rand()%11)+100000*(rand()%11)+10000*(rand()%11)+1000*(rand()%11)+
		100*(rand()%11)+10*(rand()%11)+rand()%11;
	n=1000000*(rand()%11)+100000*(rand()%11)+10000*(rand()%11)+1000*(rand()%11)+
		100*(rand()%11)+10*(rand()%11)+rand()%11;
	cout<<"x="<<x<<"  e="<<e<<"  n="<<n<<endl;
	start=clock();
	cout<<"pow(x,e):" << pow(x,e)<<endl;
	long answer=(int)pow(x,e)%n;		//指数运算
	end=clock();
	times=1000*(end-start);
	cout<<"花费的时间为:"<<times<<endl;
	return 0;
}