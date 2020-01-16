/*   P1042  乒乓球   */

#include <iostream>

using namespace std;
char map[2501][26];
int a = 1; 
int ansA, ansB; //储存两者分值
//int countA, countB;//可以用来输出所赢的局数

int main()
{
	for (int i = 1; i <= 25; i++)
	{
		cin >> map[a][i];
		if (map[a][i] == 'E')
			break;
		if (i + 1 == 25)
		{
			i = 0;
			a++;
		}
	}
	a = 1;

	//11分制
	for (int i = 1; i <= 25; i++)
	{
		if (map[a][i] == 'W')
			ansA++;
		else if (map[a][i] == 'L')
			ansB++;
		else if (map[a][i] == 'E')
		{
			cout << ansA << ":" << ansB << endl << endl;
			ansA = 0;
			ansB = 0;
			break;
		}
			
		if (i == 25)
		{
			a++;
			i = 0;
		}
		if (ansB >= 11 || ansA >= 11)
		{
			if (abs(ansA - ansB) >= 2)
			{
				cout << ansA << ":" << ansB << endl;
				//	if (ansB>ansA)
				//		countB++;
				//	if (ansB<ansA)
				//countA++;
				ansA = 0;
				ansB = 0;
			}
		}
	}
	//	cout << countA << ":" << countB << endl;
	//countA = 0;
	//countB = 0;
	a = 1;

	//21分制
	for (int i = 1; i <= 25; i++)
	{
		if (map[a][i] == 'W')
			ansA++;
		else if (map[a][i] == 'L')
			ansB++;
		else if (map[a][i] == 'E')
		{
			cout << ansA << ":" << ansB << endl;
			ansA = 0;
			ansB = 0;
			break;
		}
			
		if (i == 25)
		{
			a++;
			i = 0;
		}
		if (ansB >= 21 || ansA >= 21)
		{
			if (abs(ansA - ansB) >= 2)
			{
				cout << ansA << ":" << ansB << endl;
				/*			if (ansB>ansA)
								countB++;
								if (ansB<ansA)
								countA++;*/
				ansA = 0;
				ansB = 0;
			}
		}
	}
	//cout << countA << ":" << countB << endl;
	return 0;
}