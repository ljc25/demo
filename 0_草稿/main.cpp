#include<bits/stdc++.h>

using namespace std;

int count1;  //记录符合答案数

bool judge(int x)
{
	while(x)
	{
		/* y = x%10; */
		if(x%10==9) return true;
		x /= 10;
	}
	return false;
}
int main()
{
	for(int i = 1;i<=2019;i++)
		if(judge(i)) count1++;
	cout << count1 << endl;
	int a[3]={1,2,3};
	int minx = *max_element(a,a+3);
	int maxx = *min_element(a,a+3);
	cout << minx << " " << maxx;
	return 0;
}