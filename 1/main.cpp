#include <iostream>

using namespace std;

int m,f[5001][5001];
int len = 1;

void hp(int k)
{
	for (int i = 1; i <= len; i++)
		f[k][i] = f[k - 1][i] + f[k - 2][i];
	for (int i = 1; i <= len; i++)
	{
		if (f[k][i] >= 10)
		{
			f[k][i + 1] += f[k][i] / 10;
			f[k][i] %= 10;
			if (f[k][len+1]) len++;
		}
	}
}


int main()
{
	cin >> m;

	f[0][1] = 0, f[1][1] = 1, f[2][1] = 2;
	for (int i = 3; i <= m; i++)
		hp(i);

	for (int k = len; k >= 1; k--)
		cout << f[m][k];
//	system("pause");
	return 0;
}