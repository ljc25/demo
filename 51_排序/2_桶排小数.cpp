/* 思想 ： 就是将两位小数转换为整数 */
#include <bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int k = 0;
	int n;
	cin >> n;
	double t = 0.0;
	for (int i = 1;i <= n;i ++)
	{
		cin >> t;
		k = t * 100;//小数转整数
		a[k] ++;
	}
	for (int i = 1;i <= 100;i ++)
	{
		while (a[i] != 0)
		{
			t = double(i) / 100;//强制转换成double,整数转小数
			cout << t << " ";
			a[i] --;
		}
	}
	return 0;
}