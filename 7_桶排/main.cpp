/* 桶排 */
#include <bits/stdc++.h>

using namespace std;

int n,num;     //n记录输入多少个数   cout记录去重后的数量 
int a[101];    //储存输入的数
bool b[1001];  //标记当前数是否被储存过

int main()
{
	cin >> n;
	num = n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (b[a[i]]==0) b[a[i]] = 1;
		else if (b[a[i]] == 1) num--;
	}
	cout << num << endl;

	for (int i = 0; i < 1001; i++)
	{
		if (b[i] == 1)
			cout << i << " ";
	}
	system("pause");
	return 0;
}